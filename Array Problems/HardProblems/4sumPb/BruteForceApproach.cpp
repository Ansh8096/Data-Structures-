#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> _4sum_BR(vector<int> &arr, int target){
  // brute force approach same as 3sum-BR...
  int n = arr.size();
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        for (int l = k + 1; l < n; l++)
        {
          long long sum = arr[i] + arr[j];
          sum += arr[k];
          sum += arr[l];
          if (sum == target)
          {
            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
            sort(temp.begin(), temp.end());
            st.insert(temp);
          }
        }
      }
    }
  }
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
  int target;
  cout << "Enter the target value: "<<endl;
  cin >> target;
  vector<vector<int>> ans2 = _4sum_BR(arr,target);
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
