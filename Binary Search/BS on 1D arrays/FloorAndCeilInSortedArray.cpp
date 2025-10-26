#include <bits/stdc++.h>
using namespace std;
int floor_1(vector<int> &a, int n, int x){
  int low = 0, high = n - 1, ans = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] <= x) {
      ans = a[mid];
      low = mid + 1;
    }
    else high = mid - 1;
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
  
  cout<<floor_1(a,n1,x);

  return 0;
}
