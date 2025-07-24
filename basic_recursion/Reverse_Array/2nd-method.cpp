#include <bits/stdc++.h>
using namespace std;
void problem6(int i, vector<int> &arr, int n)
{ // reverse an array using recursion...
  // 2nd method....
  if (i >= n / 2)
    return;
  swap(arr[i], arr[n - i - 1]);
  problem6(i + 1, arr, n);
}
int main()
{
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;
  vector<int>a(n);
  cout<<"enter the values of the array: "<<endl;
  for(int i=0;i<n;i++) cin>>a[i];
  problem6(0,a,n);
  
  // for printing the array...
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}
