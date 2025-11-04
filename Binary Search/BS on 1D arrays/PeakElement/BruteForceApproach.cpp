#include <bits/stdc++.h>
using namespace std;
int find_peak_element_BR(vector<int> &a,int n){
  for (int i = 0; i < n; i++)
  {
    // Checking for the peak:
    if ((i == 0 || a[i - 1] < a[i]) && (i == n - 1 || a[i + 1] < a[i]))
    {
      return a[i];
    }
  }
  return -1;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 

  cout<<find_peak_element_BR(a,n1);
  return 0;
}
