#include <bits/stdc++.h>
using namespace std;
/*
A B C D E 
A B C D 
A B C 
A B
A
*/
void print15(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + n - i; ch++)
    {
      cout << ch << " ";
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
    print15(n);
  }
}
