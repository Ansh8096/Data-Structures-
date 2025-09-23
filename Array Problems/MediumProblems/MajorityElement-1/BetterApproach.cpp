#include <bits/stdc++.h>
using namespace std;
int majority_element(int arr[], int n){
  // BETTER APPROACH... O(n) + O(nlogn) (in map).
  map<int, int> mpp;
  for (int i = 0; i < n; i++) mpp[arr[i]]++;
  for (auto itt : mpp){
    if (itt.second > n / 2) return itt.first;
  }
  return -1; // if no such that element exists..
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
