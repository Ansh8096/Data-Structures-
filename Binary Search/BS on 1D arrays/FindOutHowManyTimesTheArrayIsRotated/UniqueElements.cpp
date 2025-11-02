#include <bits/stdc++.h>
using namespace std;
int how_many_times_arr_has_been_rotatd_uniq(vector<int> &a, int n)
{
  int low = 0, high = n - 1, ans = INT_MAX;
  int indx = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    // search space is already sorted
    // then arr[low] will always be
    // the minimum in that search space:
    if (a[low] <= a[high])
    {
      if (a[low] < ans) //  it is same as writing:- ans = min(ans, a[low]);
      {
        ans = a[low];
        indx = low; // it will store the index of ans. (which was going to be the minimum element in th array )
      }
      break;
    }

    // if left part is sorted:
    if (a[low] <= a[mid])
    {
      if (a[low] < ans) //  it is same as writing:- ans = min(ans, a[low]);
      {
        // keep the minimum:
        ans = a[low];
        indx = low; // it will store the index of ans. (which was going to be the minimum element in th array )
      }
      // Eliminate left half:
      low = low + 1;
    }

    // if right part is sorted:
    else
    {
      if (a[mid] < ans) //  it is same as writing:- ans = min(ans, a[low]);
      {
        // keep the minimum:
        ans = a[mid];
        indx = mid; // it will store the index of ans. (which was going to be the minimum element in th array )
      }
      // Eliminate right half:
      high = mid - 1;
    }
  }
  return indx;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 

  cout<<how_many_times_arr_has_been_rotatd_uniq(a,n1);
  return 0;
}
