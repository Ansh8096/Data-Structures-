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
Node* sum_of_two_LL_OP(Node* head1,Node* head2){
  Node* t1 = head1;
  Node* t2 = head2;   
  // creating dummyNode for sum LL...
  Node* dummyNode = new Node(-1);
  Node* curr = dummyNode;
  int carry = 0;
  // ruuning loop untill both the LL are exhausted...
  while(t1 != NULL || t2 != NULL){
    int sum = carry; // initially
    if(t1) sum += t1->data; // add sum only if t1 is valid 
    if(t2) sum += t2->data; // add sum only if t2 is valid 
    Node* newNode = new Node(sum%10); 
    carry = sum/10;
    curr->next = newNode;
    curr = newNode;
    if(t1) t1 = t1->next; // move t1 ahead only if it is valid..
    if(t2) t2 = t2->next; // move t2 ahead only if it is valid..
  }
  // if carry is valid at last then create its node and add it to our summ LL... 
  if(carry) {
    Node* newNode = new Node(carry);
    curr->next = newNode;
    curr = newNode;
  }
  // Our sum LL head...
  return dummyNode->next;
}
int main(){
  vector<int> a = {3,5};
  Node* head1 = convrt_arr2LL(a);

  vector<int> a1 = {4,5,9,9};
  Node* head3 = convrt_arr2LL(a1);
  
  Node* newHead = sum_of_two_LL_OP(head1,head3);
  print(newHead);
  return 0;                                                                                          
}
