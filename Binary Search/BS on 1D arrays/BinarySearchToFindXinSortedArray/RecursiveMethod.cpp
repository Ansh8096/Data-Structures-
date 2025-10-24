#include <bits/stdc++.h>
using namespace std;
int binary_search_rec(vector<int> &a, int low, int high, int target){
  // Base case.
  if (low > high) return -1;
  // Perform the steps:
  int mid = (low + high) / 2;
  if (a[mid] == target) return mid;
  else if (a[mid] < target)
  {
    return binary_search_rec(a, mid + 1, high, target);
  }
  return binary_search_rec(a, low, mid - 1, target);
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 
  
  int tar;
  cout<<"Enter the value of tar: "<<endl;
  cin>>tar;
  
  cout<<binary_search_rec(a,0,n1-1,tar);

  return 0;
}
