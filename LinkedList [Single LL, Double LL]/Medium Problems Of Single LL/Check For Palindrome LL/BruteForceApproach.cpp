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
bool chk_for_palindrome_of_LL_BR(Node *head){
  stack<int> stk;
  Node *temp = head;
  while (temp != NULL)
  {
    stk.push(temp->data);
    temp = temp->next;
  }

  temp = head;
  while (temp != NULL)
  {
    if (stk.top() != temp->data)
    {
      return false;
    }
    stk.pop();
    temp = temp->next;
  }
  return true;
}
int main(){
  vector<int> a = {1,1,0,0};
  Node *head = convrt_arr2LL(a);
  cout<<chk_for_palindrome_of_LL_BR(head);

  return 0;                                                                                          
}
