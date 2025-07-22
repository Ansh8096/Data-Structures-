#include <bits/stdc++.h>
using namespace std;
int factorial(int i)
{
  if (i == 0)
  {
    return 1; // if we return 0. '0' will get in return and we will get 0...
  }
  return i * factorial(i - 1);
}
int main()
{
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;
  cout<<factorial(n);
  return 0;
}
