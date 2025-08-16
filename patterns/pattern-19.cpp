#include <bits/stdc++.h>
using namespace std;
/*
E 
E D 
E D C 
E D C B 
E D C B A 
*/
void print19(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << char('A' + (n - 1 - j)) << " ";
    }
    cout << endl;
  }
}
int main(){
  int t;
  cout << "enter how many times you want to print diff. patterns: " << endl;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    print19(n);
  }
}
