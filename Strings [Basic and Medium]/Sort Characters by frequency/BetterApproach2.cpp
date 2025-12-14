#include <bits/stdc++.h>
using namespace std;
string sort_char_by_freq_BT2(string s){  
  // map every char of string...
  unordered_map<char,int> mpp;
  for(auto ch : s) mpp[ch]++;
  // creating a bucket data to store chars on their index (frq) 
  vector<vector<char>> bucket_data(s.length()+1);
  // for(auto [ch,frq] : mpp) bucket_data[frq].push_back(ch); // adding the chars on their frequency index
  for(auto ch_frq : mpp) bucket_data[ch_frq.second].push_back(ch_frq.first); // adding the chars on their frequency index 
  string ans = "";
  for(int i = s.length();i>=0;i--){
  for(auto ch : bucket_data[i]){// it will add all the chars to ans that represent on that particular index
      ans.append(i,ch); // expand that char (freq times)... 
      }
  }
  return ans;
}
int main(){
  cout<<sort_char_by_freq_BT2("anagram");
  return 0;                                                                                          
}
