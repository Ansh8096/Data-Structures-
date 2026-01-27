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
Node *reverse_SLL(Node *head){
  Node *temp = head;
  Node *prev = NULL;
  Node *front = NULL;
  while (temp != NULL)
  {
    // 'front' to preserve the reference
    front = temp->next;
    // Reverse the direction of the
    // current node's 'next' pointer
    // to point to 'prev'
    temp->next = prev;
    // Move 'prev' to the current
    // node for the next iteration
    prev = temp;
    // Move 'temp' to the 'front' node
    // advancing the traversal
    temp = front;
  }
  // Return the new head of
  // the reversed linked list
  return prev;
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
Node *reverse_KthNodes_groups_in_LL_OP(Node *head, int k)
{
  Node *temp = head;
  Node *nextNode = NULL;
  // Initialize a pointer to track the last node of the previous group
  Node *prevNode = NULL;
  while (temp != NULL)
  {
    // Get the Kth node of the current group
    Node *kthNode = find_kth_Node(temp, k);
    // If the Kth node is NULL (not a complete group)
    if (kthNode == NULL)
    {
      // If there was a previous group, link the last node to the current node
      if (prevNode) prevNode->next = temp;
      break; // Exit the loop
    }

    // Store the next node and after the Kth node
    nextNode = kthNode->next;
    // Disconnect the Kth node to prepare for reversal
    kthNode->next = NULL;
    reverse_SLL(temp); // Reverse the nodes from temp to the Kth node
    // Adjust the head if the reversal starts from the head
    if (temp == head)
    {
      head = kthNode;
    }
    // Link the last node of the previous group to the reversed group
    else prevNode->next = kthNode;
    // Update the pointer to the last node of the previous group

    // Move to the next group
    prevNode = temp;
    // Move to the next group
    temp = nextNode;
  }
  // Return the head of the modified linked list
  return head;
}
int main(){
  vector<int> a = {1, 2, 3, 4, 5};
  Node *head = convrt_arr2LL(a);

  int k;
  cout << "enter the value of the k: " << endl;
  cin >> k;
  head = reverse_KthNodes_groups_in_LL_OP(head, k);
  print(head);

  return 0;                                                                                          
}
