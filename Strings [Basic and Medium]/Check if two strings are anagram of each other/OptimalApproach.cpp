#include <bits/stdc++.h>
using namespace std;
string valid_anagaram_OP(string s,string t){
  unordered_map<char,int> mpp1;
  unordered_map<char,int> mpp2;
  // map string 1 char with their count
  for(auto el : s){
    mpp1[el]++;
  }
  // map string 2 char with their count
  for(auto el2 : t){
    mpp2[el2]++;
  }
  if(mpp1 == mpp2) return "true";
  else return "false";
}
int main(){
  cout<<valid_anagaram_OP("anagram","nagaram");
  return 0;                                                                                          
}
