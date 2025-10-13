#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> _3sum_BT(vector<int> &arr){
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
      set<int> hashset;
      for (int j = i + 1; j < n; j++)
      {
        // Calculate the 3rd element:
        int third = -(arr[i] + arr[j]);
        // Find the element in the set:
        if (hashset.find(third) != hashset.end())
        {
          vector<int> temp = {arr[i], arr[j], third};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
        hashset.insert(arr[j]);
      }
  }
  // store the set in the answer:
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}
int main(){
  int n;
  cout << "Enter the size of the array: "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the value of the array: "<<endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<vector<int>> ans2 = _3sum_BT(arr);
  for (auto itr : ans2)
  {
    for (auto il : itr)
    {
        cout << il << " ";
    }
    cout << endl;
  }
  return 0;
}
