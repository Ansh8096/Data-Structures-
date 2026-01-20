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
Node* convrt_arr2LL(vector<int>&a){
  Node* head = new Node(a[0]); // head node of our LL
  Node* mover = head;    // starting mover ptr from head node ptr
  for (int i = 1; i < a.size(); i++)
  {
    Node* temp = new Node(a[i]); // creating temp. node for every a[i]..
    mover->next = temp;   // updating the mover ptr
    // implement mover_ptr for creating a LL...
    mover = temp; // OR (mover = mover->next) 
  }
  // returning the head Node of our LL...
  return head;
}
void print(Node *head)
{
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node *sort_0_1_2_LL_OP(Node *head){
  // creating dummy Nodes...
  Node *zeroHead = new Node(-1);
  Node *oneHead = new Node(-1);
  Node *twoHead = new Node(-1);
  // using these to keep track..
  Node *zero = zeroHead;
  Node *one = oneHead;
  Node *two = twoHead;
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == 0)
    {
      zero->next = temp;
      zero = temp;
    }
    else if (temp->data == 1)
    {
      one->next = temp;
      one = temp;
    }
    else
    {
      two->next = temp;
      two = temp;
    }

    temp = temp->next;
  }
  // this will link the 0's LL to 1's LL if it is valid else link it to 2's LL...
  zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
  // linking 1's LL to 2's LL (doesn't matter if valid or not)...
  one->next = twoHead->next;
  two->next = NULL;
  Node *newHead = zeroHead->next;
  free(zeroHead);
  free(oneHead);
  free(twoHead);
  return newHead;
}
int main(){
  vector<int> a = {0,1,2,1,0};
  Node *head = convrt_arr2LL(a);

  head = sort_0_1_2_LL_OP(head);
  print(head);
  return 0;                                                                                          
}
