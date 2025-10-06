#include <bits/stdc++.h>
using namespace std;
int Pascal_triangle_1(int n, int r)
{
  int res = 1;
  // calculating nCr:
  for (int i = 0; i < r; i++)
  {
      res = res * (n - i);
      res = res / (i + 1);
  }
  return res;
}
void Pascal_triangle_2_BR(int R)
{
    for (int C = 1; C <= R; C++)
    {
        cout << Pascal_triangle_1(R - 1, C - 1) << " ";
    }
}
int main(){
  int R;
  cout<<"Enter the value of Row:"<<endl;
  cin>>R;
  Pascal_triangle_2_BR(R);  
  return 0; 
}
