#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *child;

public:
  Node()
  {
    next = nullptr;
    child = nullptr;
    data = 0;
  }
  Node(int data1, Node *next1, Node *child1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
    child = child1;
  }

public:
  Node(int data1)
  {
    data = data1;    // Initialize data with the provided value
    next = nullptr;  // Initialize next as null since it's the end of the list
    child = nullptr; // Initialize next as null since it's the end of the list
  }
};
void print(Node *head){
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->child;
  }
  cout << endl;
}
void printOriginalLinkedList(Node *head, int depth){
  // Print the linked list
  // in a grid-like structure
  while (head != nullptr)
  {
    cout << head->data;
    // If child exists, recursively
    // print it with indentation
    if (head->child)
    {
      cout << " -> ";
      printOriginalLinkedList(head->child, depth + 1);
    }
    // Add vertical bars
    // for each level in the grid
    if (head->next)
    {
      cout << endl;
      for (int i = 0; i < depth; ++i)
      {
        cout << "| ";
      }
    }
    head = head->next;
  }
}
Node *merge_two_srted_LL(Node *t1, Node *t2){
  Node *dummyNode = new Node(-1);
  Node *temp = dummyNode;
  while (t1 != NULL && t2 != NULL){
    if (t1->data < t2->data){
      temp->child = t1;
      temp = t1;
      t1 = t1->child;
    }
    else{
      temp->child = t2;
      temp = t2;
      t2 = t2->child;
    }
    temp->next = NULL;
  }
  if (t1) temp->child = t1;
  else temp->child = t2;
  return dummyNode->child;
}
Node *Flatten_LL_OP(Node *head){
  if (head == NULL || head->next == NULL) return head;
  Node *mergedHead = Flatten_LL_OP(head->next);
  return merge_two_srted_LL(head, mergedHead);
}
int main(){
  Node *head = new Node(5);
  head->child = new Node(14);

  head->next = new Node(10);
  head->next->child = new Node(4);

  head->next->next = new Node(12);
  head->next->next->child = new Node(20);
  head->next->next->child->child = new Node(13);

  head->next->next->next = new Node(7);
  head->next->next->next->child = new Node(17);

  cout << "Original linked list " << endl;
  printOriginalLinkedList(head, 0);
  cout << "\nlinked list after flatening: " << endl;
  head = Flatten_LL_OP(head);
  print(head);

  return 0;                                                                                          
}
