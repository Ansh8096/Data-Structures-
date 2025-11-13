#include <bits/stdc++.h>
using namespace std;
int max_el_for_koko(vector<int> &a, int n){
  int maxii = INT_MIN;
  // find the maximum:
  for (int i = 0; i < n; i++){
    maxii = max(maxii, a[i]);
  }
  return maxii;
}
long long sum_of_arr(vector<int> &a, int n)
{
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  return sum;
}
int total_days(vector<int> &a, int n, int cap)
{
  // First day.
  int day = 1, load = 0;
  for (int i = 0; i < n; i++)
  {
    if (load + a[i] > cap)
    {
      day++;       // move to next day
      load = a[i]; // load the weight.
    }
    // load the weight on the same day.
    else load += a[i];
  }
  return day;
}
int capacity_to_ship_in_days_BR(vector<int> &a, int n, int d)
{
  int maxi = max_el_for_koko(a, n);
  int sum = sum_of_arr(a, n);
  for (int cap = maxi; cap <= sum; cap++)
  {
    if (total_days(a, n, cap) <= d)
    {
      return cap;
    }
  }
  // dummy return statement:
  return -1;
}
int main(){

  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int d;
  cout<<"Enter the days : "<<endl;
  cin>>d;

  cout<<capacity_to_ship_in_days_BR(a,n,d);

  return 0;
}
