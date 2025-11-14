#include <bits/stdc++.h>
using namespace std;
int Kth_missing_no_sortd_ARR_BR(vector<int> &a, int n, int k)
{
  for (int i = 0; i < n; i++){
    if (a[i] <= k) k++; // shifting k
    else break;
  }
  return k;
}
int main(){

  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int k;
  cout<<"Enter the value of Kth missing no.: "<<endl;
  cin>>k;
  cout<<Kth_missing_no_sortd_ARR_BR(a,n,k);

  return 0;
}
