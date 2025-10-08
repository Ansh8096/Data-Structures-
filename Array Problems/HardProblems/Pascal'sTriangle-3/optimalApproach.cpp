#include <bits/stdc++.h>
using namespace std;
vector<int> gen_row(int row)
{
  // it is same function as used in type-2(OP)...
  vector<int> ansrow;
  ansrow.push_back(1); // it set 1 in starting...
  long long ans = 1;   // it is set 1.instead of zero so that it will not give zero after multiplying...
  for (int col = 1; col < row; col++)
  {
      ans = ans * (row - col);
      ans = ans / col;
      ansrow.push_back(ans);
  }
  return ansrow;
}
vector<vector<int>> Pascal_triangle_3_OP(int n)
{
  // generate rows from 1 to N (gen_row(i) function)....
  vector<vector<int>> ans;
  for (int i = 1; i <= n; i++)
  {
      ans.push_back(gen_row(i));
  }
  return ans;
}
int main(){
  int R;
  cout<<"Enter the value of Row:"<<endl;
  cin>>R;

  vector<vector<int>> ans = Pascal_triangle_3_OP(R);
  for (auto itr : ans)
  {
    for (auto il : itr)
    {
      cout << il << " ";
    }
    cout << endl;
  }
  return 0;
}
