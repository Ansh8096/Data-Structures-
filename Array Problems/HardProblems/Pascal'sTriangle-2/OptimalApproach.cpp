#include <bits/stdc++.h>
using namespace std;
void Pascal_triangle_2_op(int R)
{
  long long ans = 1;
  cout << ans << " ";
  for (int C = 1; C < R; C++)
  {
    ans = ans * (R - C);
    ans = ans / C;
    cout << ans << " ";
  }
}
int main(){
  int R;
  cout<<"Enter the value of Row:"<<endl;
  cin>>R;
  Pascal_triangle_2_op(R);  
  return 0; 
}
