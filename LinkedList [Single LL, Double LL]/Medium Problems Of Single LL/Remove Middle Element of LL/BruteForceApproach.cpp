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
Node* remove_middle_of_LL_BR(Node* head){
  // edge case:
  if(head == NULL || head->next == NULL) return head;
  Node* temp = head;
  int N = 0;
  while(temp != NULL){
    N++;
    temp = temp->next;
  }  
  int req = N/2;
  temp = head;
  while (temp != NULL)
  {
    req--;
    if(req == 0) break;
    temp = temp->next;
  }
  Node* del_mid = temp->next;
  temp->next = temp->next->next;
  free(del_mid);
  return head;
}
int main(){

  vector<int> a = {0,1,2,3,4,5,6};
  Node *head = convrt_arr2LL(a);

  head = remove_middle_of_LL_BR(head);
  print(head);
  return 0;                                                                                          
}
