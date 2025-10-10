#include <bits/stdc++.h>
using namespace std;
vector<int> maj_el_n3_BR(vector<int> &arr)
{
  int n = arr.size();
  vector<int> ans;
  for (int i = 0; i < n; i++){
    int cnt = 0;
    // selected element is arr[i]:
    //  Checking if arr[i] is not already a part of the answer:
    if (ans.size() == 0 || ans[0] != arr[i]){
      for (int j = 0; j < n; j++){
        // counting the frequency of arr[i]
        if (arr[i] == arr[j]) cnt++;
      }
    }
    // check if frquency is greater than n/3
    if (cnt > (n / 3)) ans.push_back(arr[i]);
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
  vector<int> ans2 = maj_el_n3_BR(arr);
  for(auto itt:ans2) cout<<itt<<" ";  
  return 0;
}
