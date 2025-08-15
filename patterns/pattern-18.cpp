#include <bits/stdc++.h>
using namespace std;
/*
E 
D E
C D E
B C D E
A B C D E
*/

void print18(int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (char ch = 'E' - i; ch <= 'E'; ch++)
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
    print18(n);
  }
}
