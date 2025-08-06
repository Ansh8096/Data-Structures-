#include <bits/stdc++.h>
using namespace std;
void print10(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int star = i;
    if (i > n)
      star = 2 * n - i;
    for (int j = 1; j <= star; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
int main()
{
  int t;
  cout << "enter how many times you want to print diff. patterns: " << endl;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    print10(n);
  }
}
