#include <bits/stdc++.h>
using namespace std;
int max_subarr_product_BT(vector<int> &a, int n)
{
  // BETTER APPROACH..........
  int maxi = INT_MIN;
  for (int i = 0; i < n - 1; i++)
  {
    int product = a[i];
    for (int j = i + 1; j < n; j++)
    {
      maxi = max(maxi, product); // it will the add the maximum product (which is declared before the loop every time) to maxi....
      product = product * a[j];
    }
    maxi = max(maxi, product);
  }
  return maxi;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i];  
  
  cout<<max_subarr_product_BT(a,n1);

  return 0;
}
