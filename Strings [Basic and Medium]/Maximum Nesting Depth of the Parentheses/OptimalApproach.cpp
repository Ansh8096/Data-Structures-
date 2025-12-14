#include <bits/stdc++.h>
using namespace std;
int max_Depth_OF_parenthesis_OP(string s){
  int ans = 0, cnt = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '('){
      cnt++;
      ans = max(ans, cnt);
    }
    else if (s[i] == ')') cnt--;
  }
  return ans;
}
int main(){
  cout<<max_Depth_OF_parenthesis_OP("(1+(2*3)+((8)/4))+1");
  return 0;                                                                                          
}
