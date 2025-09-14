#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int num)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      return i;
    }
  }
  return -1;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];
  
  int num;
  cout << "enter the value of num : " << endl;
  cin >> num;

  cout<<linear_search(arr,n,num);
  return 0;
}
