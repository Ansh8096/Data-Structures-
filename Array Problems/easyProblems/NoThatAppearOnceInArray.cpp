#include <bits/stdc++.h>
using namespace std;
void find_no_that_appear_once(int arr[], int n)
{
  int xorr = 0;
  for (int i = 0; i < n; i++)
  {
    xorr = xorr ^ arr[i];
  }
  cout << "the number that is repeating only once in the array: " << xorr << endl;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  find_no_that_appear_once(arr,n);
  return 0;
}
