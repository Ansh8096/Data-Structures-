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
    next = next1; // Initialize next with the provided value
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
Node *find_kth_Node(Node *head, int k)
{
  if (head == NULL || head->next == NULL) return head;
  Node *temp = head;
  while (temp != NULL){
    k--;
    if (k == 0) return temp;
    temp = temp->next;
  }
  return NULL;
}
Node *rotate_LL_OP(Node *head, int k){
  if (head == NULL || k == 0) return head;
  Node *tail = head;
  int len = 1; // need to start from 1 , becauz we will go only upto last Node...
  while (tail->next != NULL)
  {
    tail = tail->next;
    len++;
  }
  if (k % len == 0) return head;
  k = k % len;
  tail->next = head;

  Node *newLastNode = find_kth_Node(head, len - k);
  head = newLastNode->next;
  newLastNode->next = NULL;
  return head;
}
int main(){
  vector<int> a = {1, 2, 3, 4, 5};
  Node *head = convrt_arr2LL(a);

  int k;
  cout << "enter the value of the k: " << endl;
  cin >> k;
  head = rotate_LL_OP(head,k);
  print(head);

  return 0;                                                                                          
}
