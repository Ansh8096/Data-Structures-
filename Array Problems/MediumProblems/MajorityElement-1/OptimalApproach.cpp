#include <bits/stdc++.h>
using namespace std;
int majority_element_op(int arr[],int n){
  // OPTIMAL APPROACH...
  int cnt = 0, el = 0;
  for (int i = 0; i < n; i++){
    if (cnt == 0)
    {
      cnt = 1;
      el = arr[i];
    }
    else if (arr[i] == el) cnt++;
    else if (arr[i] != el) cnt--;
  }

  // it is for the verification of our element....
  int cnt2 = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] == el) cnt2++;
    if (cnt2 > n / 2) return el;
  }
  return -1; // if no majority element exists...
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  cout<<majority_element_op(arr,n);
}
