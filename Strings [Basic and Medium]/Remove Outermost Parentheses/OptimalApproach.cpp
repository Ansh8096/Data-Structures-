#include <bits/stdc++.h>
using namespace std;
string valid_parenthisis_OP(string &s){
  int n = s.length();
  string ans = "";
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == ')') cnt--;
    if (cnt != 0) ans.push_back(s[i]);
    if (s[i] == '(') cnt++; // checking this condition here will prevent us from adding the outermost parenthesis in our answer..
  }
  return ans;
}
int main(){
  string str;
  cout<<"Enter the string :"<<endl;
  cin>>str;
  
  cout<<valid_parenthisis_OP(str);
  return 0;                                                                                          
}
