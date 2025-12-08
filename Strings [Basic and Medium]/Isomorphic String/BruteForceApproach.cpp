#include <bits/stdc++.h>
using namespace std;
string isIsomorphic_BR(string s, string t){
  int n = s.length();
  char hash[128] = {}; // create an hash_arr
  for (int i = 0; i < n; i++){
    char v = s[i]; // set v = s[i];
    if (!hash[v])  // if s[i] is not in mapped..
    {
      for (auto itt : hash) // search through the hash_arr to check if t[i] is there or not...
      {
        if (itt == t[i]) return "false"; // if t[i] is there return false;
      }
      hash[v] = t[i]; // else map s[i] to t[i] ...
    }
    // means s[i] was mapped....
    if (hash[v] != t[i]){ // now if s[i] is not mapped to the t[i] to which it is supposed to be ....
      return "false"; // then return false;
    }
  }
  return "true";
}
int main(){

  cout<<isIsomorphic_BR("apple","bbnbm");
  return 0;                                                                                          
}
