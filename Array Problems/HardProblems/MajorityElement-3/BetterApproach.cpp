#include <bits/stdc++.h>
using namespace std;
vector<int> maj_el_n3_BT(vector<int> &arr){
  int n = arr.size();
  vector<int> ans;
  map<int, int> mpp;
  // least occurrence of the majority element:
  int min = int(n / 3) + 1;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
    // checking if arr[i] is
    //  the majority element
    if (mpp[arr[i]] == min)
    {
      ans.push_back(arr[i]);
    }
    if (ans.size() == 2) break;
  }
  return ans;
}
int main(){
  int n;
  cout << "Enter the size of the array: "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the value of the array: "<<endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<int> ans2 = maj_el_n3_BT(arr);
  for(auto itt:ans2) cout<<itt<<" ";  
  return 0;
}
