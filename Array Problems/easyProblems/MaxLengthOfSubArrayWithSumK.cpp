#include <bits/stdc++.h>
using namespace std;
void sub_arrays_positive(int arr[], int n, long long k)
{
  int left = 0, right = 0;
  int maxlen = 0;
  long long sum = arr[0];
  while (right < n)
  {
    while (left <= right && sum > k)
    {
      sum -= arr[left];
      left++;
    }
    if (sum == k)
    {
      maxlen = max(maxlen, right - left + 1);
    }

    right++;
    if (right < n)
    {
      sum += arr[right];
    }
  }
  cout << "the max. length of the subarray with sum k is: " << maxlen << endl;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  long long k;
  cout<<"Enter the sum for the subarray : "<<endl;
  cin >> k;

  sub_arrays_positive(arr,n,k);
  return 0;
}
