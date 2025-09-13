#include <bits/stdc++.h>
using namespace std;

void moves_zero_toTHEend(int arr[], int n)
{
  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }

  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
  // for printing the array....
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];
  
  moves_zero_toTHEend(arr,n);
  return 0;
}
