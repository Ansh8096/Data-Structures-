#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mrge_ovrlappng_sub_intrvl_OP(vector<vector<int>> &arr){
  int n = arr.size();
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++)
  {
    if (ans.empty() || arr[i][0] > ans.back()[1])
    {
      ans.push_back(arr[i]);
    }
    else
    {
      ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
  }
  return ans;
}
int main(){
  vector<vector<int>>arr2 = { {1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
  vector<vector<int>> ans2 = mrge_ovrlappng_sub_intrvl_OP(arr2);
  for (auto it : ans2) cout << "[" << it[0] << ", " << it[1] << "] ";
  return 0;
}
