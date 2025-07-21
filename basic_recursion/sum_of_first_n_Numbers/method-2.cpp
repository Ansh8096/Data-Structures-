#include <bits/stdc++.h>
using namespace std;
int problem_4(int i)
{ // sum of thr first N numbers..
  // 2. Functional way :- this function hAS THE TASK TO RETURN...
  if (i == 0)
  {
    return 0;
  }
  return i + problem_4(i - 1);
}
int main()
{
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;
  cout<<problem_4(n);
  return 0;
}
