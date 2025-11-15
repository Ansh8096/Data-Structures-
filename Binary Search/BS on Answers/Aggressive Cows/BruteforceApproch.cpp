#include <bits/stdc++.h>
using namespace std;
bool place_cows(vector<int> &a, int n, int dist, int cows){
  int cnt_cows = 1, last = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] - last >= dist)
    {
      cnt_cows++;
      last = a[i];
    }
  }
  if (cnt_cows >= cows) return true;
  else return false;
}
int aggressive_cows_BR(vector<int> &a, int n, int cows){
  sort(a.begin(), a.end());
  int limit = a[n - 1] - a[0];
  for (int i = 1; i < limit; i++)
  {
    if (place_cows(a, n, i, cows) == 1)
    {
      continue;
    }
    else return i - 1;
  }
  // dummy return statement
  return limit;
}
int main(){

  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int c;
  cout<<"Enter the cows: "<<endl;
  cin>>c;

  cout<<aggressive_cows_BR(a,n,c);
  return 0;
}
