#include <bits/stdc++.h>
using namespace std;
int multiplying(int i, int n){
  return pow(i, n); // (i)^n
}
int find_Nth_root_of_integer_BR(int n, int m){
  for (int i = 1; i < m; i++)
  {
    if (multiplying(i, n) == m)
    {
      return i;
    }
    else if (multiplying(i, n) > m)
    {
      break;
    }
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;

  int m;
  cout<<"Enter the value of m: "<<endl;
  cin>>m;

  cout<<find_Nth_root_of_integer_BR(n,m);
  return 0;
}
