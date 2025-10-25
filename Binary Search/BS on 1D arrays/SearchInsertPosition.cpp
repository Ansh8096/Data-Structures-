#include <bits/stdc++.h>
using namespace std;
int search_insert_pos(vector<int> &a, int n, int x){
  // same code as we used in lower bound....
  int low = 0, high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] >= x){ // CASE_1: may be an answer....
      ans = mid;
      // look for small index on left ...
      high = mid - 1;
    }
    // look for right...
    else low = mid + 1; // CASE_2: can't be an answer....
  }
  return ans;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 
  
  int x;
  cout<<"Enter the value of x: "<<endl;
  cin>>x;
  
  cout<<search_insert_pos(a,n1,x);

  return 0;
}
