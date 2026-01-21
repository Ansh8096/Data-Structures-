#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
  }

public:
  Node(int data1)
  {
    data = data1;   // Initialize data with the provided value
    next = nullptr; // Initialize next as null since it's the end of the list
  }
};
Node *convrt_arr2LL(vector<int> &a){
  Node *head = new Node(a[0]); // head node of our LL
  Node *mover = head;          // starting mover ptr from head node ptr
  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i]); // creating temp. node for every a[i]..
    mover->next = temp;          // updating the mover ptr
    // implement mover_ptr for creating a LL...
    mover = temp; // OR (mover = mover->next)
  }
  // returning the head Node of our LL...
  return head;
}
void print(Node *head){
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node *reverse_SLL_OP2(Node *head){
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *new_head = reverse_SLL_OP2(head->next);
  Node *front = head->next;
  front->next = head;
  head->next = NULL;
  return new_head;
}
Node *add_1_to_no_reperesentedBy_LL_BR(Node *head){
  head = reverse_SLL_OP2(head); // o(N)...
  Node *temp = head;
  int carry = 1;
  while (temp != NULL) // o(N)...
  {
    temp->data = temp->data + carry;
    if (temp->data < 10)
    {
      carry = 0;
      break;
    }
    else
    {
      carry = 1;
      temp->data = 0;
    }
    temp = temp->next;
  }
  if (carry == 1)
  {
    Node *newHead = new Node(1);

    head = reverse_SLL_OP2(head); // o(N)...
    newHead->next = head;
    return newHead;
  }
  if (carry == 0)
  {
    head = reverse_SLL_OP2(head); // o(N)...
    return head;
  }
}
int main(){
  vector<int> a = {3, 5};
  Node *head1 = convrt_arr2LL(a);
  head1 = add_1_to_no_reperesentedBy_LL_BR(head1);
  print(head1);
  return 0;                                                                                          
}
