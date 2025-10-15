#include <bits/stdc++.h>
using namespace std;
int cnt_subarr_XOR_k(vector<int>&arr,int n,int k){
  // BETTER APPROACH.... T.C->O(n^2)
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int xorr = 0;
    for (int j = i; j < n; j++)
    {
      xorr = xorr ^ arr[j];
      if (xorr == k) cnt++;
    }
  }
  return cnt;
}
int main(){
  int n;
  cout << "Enter the size of the array: "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the value of the array: "<<endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  int k;
  cout << "Enter the k value: "<<endl;
  cin >> k;
  cout<<cnt_subarr_XOR_k(arr,n,k);
  return 0;
}
