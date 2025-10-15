#include <bits/stdc++.h>
using namespace std;
int cnt_subarr_XOR_k(vector<int>&arr,int n,int k){
  // BRUTE FORCE APPROACH....  T.C->O(n ^ 3) 
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int xorr = 0;
      for (int k = i; k <= j; k++)
      {
        xorr = xorr ^ arr[k];
        if (xorr == k) cnt++;
      }
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
