#include <bits/stdc++.h>
using namespace std;
int majority_element(int arr[],int n){
  // BRUTE FORCE APPROACH... O(n^2)
    for (int i = 0; i < n; i++){
      int cnt = 0;
      for (int j = 0; j < n; j++)
      {
        if (arr[i] == arr[j]) cnt++;
      }
      if (cnt > n / 2) return arr[i];
    }
  return -1; // return -1 if no such that element exists..
} 
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  cout<<majority_element(arr,n);
}
