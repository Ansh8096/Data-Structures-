#include <bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1; // Initialize data with the provided value
    next = next1; // Initialize next with the provided
    back = back1; // Initialize back with the provided
  }

public:
  Node(int data1)
  {
    data = data1;   // Initialize data with the provided value
    next = nullptr; // Initialize next as null since it's the end of the list
    back = nullptr; // Initialize next as null since it's the start of the list
  }
};
void print(Node *head){
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}
Node *convrt_arr_2_DLL(vector<int> &a){
  Node *head = new Node(a[0]);
  Node *prev = head;
  for (int i = 1; i < a.size(); i++)
  {
    Node *temp = new Node(a[i], nullptr, prev);
    prev->next = temp;
    prev = prev->next;
  }
  return head;
}
vector<vector<int>> find_pairs_with_given_sum_k_BR(Node *head, int sum){
  Node *temp1 = head;
  vector<vector<int>> ans;
  while (temp1 != NULL)
  {
    Node *temp2 = temp1->next;
    while (temp2 != NULL && (temp1->data + temp2->data) <= sum)
    {
      if ((temp1->data + temp2->data) == sum)
      {
        ans.push_back({temp1->data, temp2->data});
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
  return ans;
}
int main(){
  vector<int> a = {1,1,1,2,3,3,4};
  Node *head = convrt_arr_2_DLL(a);

  int sum;
  cout << "enter the value of sum: " << endl;
  cin >> sum;

  vector<vector<int>> ans = find_pairs_with_given_sum_k_BR(head, sum);
  // for printing the array...
  for (auto itr : ans)
  {
    for (auto itt : itr)
    {
      cout << itt << " ";
    }
    cout << endl;
  }
  return 0;                                                                                          
}
