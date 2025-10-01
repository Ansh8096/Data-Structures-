#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> set_matrix_zero_BT(vector<vector<int>> &matrix,int n,int m){
  int row[n] = {0};    // row array..
  int column[m] = {0}; // column array..
  // Traverse the matrix:
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (matrix[i][j] == 0){
        // mark ith index of row wih 1:
        row[i] = 1;
        // mark jth index of column wih 1:
        column[j] = 1;
      }
    }
  }

  // Finally, mark all (i, j) as 0
  // if row[i] or column[j] is marked with 1.
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (row[i] || column[j]){
        matrix[i][j] = 0;
      }
    }
  }
  return matrix;
}
int main(){
  vector<vector<int>> matrix = {
  {1,1,1,1}, // matrix[0]
  {1,0,1,1}, // matrix[1]
  {1,1,0,1}, // matrix[2]
  {0,0,1,1}  // matrix[3]
  };
  int n=matrix.size();
  int m = matrix[0].size();  
  vector<vector<int>> ans = set_matrix_zero_BT(matrix,n,m);
  // for printing like 2-d matrix..
  cout <<"the final matrix is :"<<endl;
  for(auto it:ans){
    for(auto il: it){
        cout<<il<<" ";
    }
    cout<<endl;
  }
}
