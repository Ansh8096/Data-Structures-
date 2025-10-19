#include <bits/stdc++.h>
using namespace std;
pair<int,int> missing_and_repeating_BR_BT(int a1[],int n){
  // BRUTE FORCE APPROACH.....
  int missing = -1, repeating = -1;
  for (int i = 1; i <= n; i++)
  {
    // Count the occurrences:
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (a1[j] == i) cnt++;
    }
    if (cnt == 2) repeating = i;
    else if (cnt == 0) missing = i;
    if (repeating != -1 && missing != -1) break;
  }
  return {repeating, missing};
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  int a1[n1];
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a1[i];  
  
  pair<int,int> ans = missing_and_repeating_BR_BT(a1,n1);
  cout<<ans.first<<","<<ans.second;

  return 0;
}
