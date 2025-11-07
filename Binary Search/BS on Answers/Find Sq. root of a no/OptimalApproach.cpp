#include <bits/stdc++.h>
using namespace std;
int find_sqrt_OP(int n){
  int low = 1, high = n;
  while (low <= high){
    long long mid = (low + high) / 2;
    long long val = mid * mid;
    if (val <= n)
    {
      // eliminate the left half:
      low = mid + 1;
    }
    else
    {
      // eliminate the right half:
      high = mid - 1;
    }
  }
  return high;
}
int main(){
  int n1;
  cout<<"Enter the value of n1: "<<endl;
  cin>>n1;

  cout<<find_sqrt_OP(n1);
  return 0;
}
