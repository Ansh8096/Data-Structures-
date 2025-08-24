/* In map-hashing we can iniitialize keys like this :-
   1. map<pair<int,int>,int>  and singles like char,double,int etc...
 
   In unordered_map-hashing we can't iniitialize keys like this :-
   1. map<pair<int,int>,int> 
   
   // but we can initialize : singles like char,double,int etc...    */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter the value of array ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // precompute:-
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++ ;

    }

    int q;
    cout<<"enter how many time you want to run query "<<endl;
    cin>>q;

    cout<<"check for the numbers you want..."<<endl;
    while (q--) // if we set q=5 loop will run for 5 times... 
    {
    int number;
    cin>>number;
    // fetch
    cout<<number<<" is repeated "<<mpp[number]<<" times in the array"<<endl;
    }
    
    // for printing the map
    cout<<"\nthis is how map looks like "<<endl;
    for (auto itt:mpp )
    {
        cout<<itt.first<<"->"<<itt.second<<endl;
    }
    
    return 0;
}
// T.C= O(N+N) -> O(2N) -> O(N)..
