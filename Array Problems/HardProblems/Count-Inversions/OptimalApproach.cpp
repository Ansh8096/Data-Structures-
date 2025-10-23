#include <bits/stdc++.h>
using namespace std;
int merge(int a1[], int low, int mid, int high)
{
  // Modification 1: cnt variable to count the pairs:
  int cnt = 0;
  int left = low, right = mid + 1;
  vector<int> temp;
  // storing elements in the temporary array in a sorted manner//
  while (left <= mid && right <= high)
  {
    if (a1[left] <= a1[right])
    {
      temp.push_back(a1[left]);
      left++;
    }
    else
    {
      temp.push_back(a1[right]);
      cnt += mid - left + 1; // Modification 2
      right++;
    }
  }
  // if elements on the left half are still left //
  while (left <= mid)
  {
    temp.push_back(a1[left]);
    left++;
  }
  //  if elements on the right half are still left //
  while (right <= high)
  {
    temp.push_back(a1[right]);
    right++;
  }
  // transfering all elements from temporary to arr //
  for (int i = low; i <= high; i++)
  {
    a1[i] = temp[i - low];
  }
  // Modification 3
  return cnt;
}
int mergesort(int a1[], int low, int high)
{
  int cnt = 0;
  if (low >= high) return 0;
  int mid = (low + high) / 2;
  cnt += mergesort(a1, low, mid);      // left half
  cnt += mergesort(a1, mid + 1, high); // right half
  cnt += merge(a1, low, mid, high);    // merging sorted halves
  return cnt;
}
int count_inversions_OP(int a1[], int n)
{
  return mergesort(a1, 0, n - 1);
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  int a1[n1];
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a1[i];  
  
  cout<<count_inversions_OP(a1,n1);

  return 0;
}
