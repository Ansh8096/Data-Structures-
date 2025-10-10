#include <bits/stdc++.h>
using namespace std;
vector<int> maj_el_n3_OP(vector<int> &arr){
  int n = arr.size();
  int el1 = 0, el2 = 0, cnt1 = 0, cnt2 = 0;
  // applying the Extended Boyer Moore's Voting Algorithm:
  for (int i = 0; i < n; i++)
  {
    if (cnt1 == 0 && arr[i] != el2)
    {
      cnt1 = 1;
      el1 = arr[i];
    }
    else if (cnt2 == 0 && arr[i] != el1)
    {
      cnt2 = 1;
      el2 = arr[i];
    }
    else if (arr[i] == el1)
      cnt1++;
    else if (arr[i] == el2)
      cnt2++;
    else
    {
      cnt1--;
      cnt2--;
    }
  }
  // manualing veryfying...
  cnt1 = 0, cnt2 = 0;
  vector<int> ans;
  int min = int(n / 3) + 1;
  for (int i = 0; i < n; i++)
  {
    if (el1 == arr[i]) cnt1++;
    if (el2 == arr[i]) cnt2++;
  }
  if (cnt1 >= min && el1 != el2) ans.push_back(el1);
  if (cnt2 >= min) ans.push_back(el2);
  return ans;
}
int main(){
  int n;
  cout << "Enter the size of the array: "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the value of the array: "<<endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<int> ans2 = maj_el_n3_OP(arr);
  for(auto itt:ans2) cout<<itt<<" ";  
  return 0;
}
