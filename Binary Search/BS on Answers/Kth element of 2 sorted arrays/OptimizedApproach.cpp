#include <bits/stdc++.h>
using namespace std;
double kth_el_op(vector<int> &a1, int n1, vector<int> &a2, int n2, int k){
  if (n2 < n1)return kth_el_op(a2, n2, a1, n1, k); // Edge case...
  int l = max(0, k - n1), h = min(k, n1), n = n1 + n2;
  int part = k;
  while (l <= h){
    int m1 = (l + h) >> 1;
    int m2 = k - m1;
    int l1 = INT_MIN, l2 = INT_MIN;
    int r1 = INT_MAX, r2 = INT_MAX;
    
    if (m1 < n1) r1 = a1[m1];
    if (m2 < n2) r2 = a2[m2];
    if (m1 - 1 >= 0) l1 = a1[m1 - 1];
    if (m2 - 1 >= 0) l2 = a2[m2 - 1];

    if (l1 <= r2 && l2 <= r1){
      return max(l1, l2);
    }
    else if (l1 > r2) h = m1 - 1;
    else if (l2 > r1) l = m1 + 1;
  }
  return 0.0;
}
int main(){
  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int n1;
  cout<<"Enter the value n: "<<endl;
  cin>>n1;

  vector<int> a1(n1);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n1;i++) cin>>a1[i];
    
  int k;
  cout<<"Enter the value k: "<<endl;
  cin>>k;

  cout<<kth_el_op(a,n,a1,n1,k);
  return 0;
}
