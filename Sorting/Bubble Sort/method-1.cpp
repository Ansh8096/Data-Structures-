// ITERATIVE METHOD :----->
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i >= 1; i--)
  {
    int didswap = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        didswap = 1;
      }
    }
    if (didswap == 0) break;   // it will break if no swap is done..

    cout << "runs\n"; // it shows how many times swap is done...
  }
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin >> arr[i];

  bubble_sort(arr, n);

  cout << "displaying the sorted array :" << endl;
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  
  return 0;
}
