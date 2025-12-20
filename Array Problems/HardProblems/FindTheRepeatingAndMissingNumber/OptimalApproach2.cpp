#include <bits/stdc++.h>
using namespace std;
vector<int> missing_and_repeating_OP2(vector<int>&a){
    // t.c : O(2n) + O(32) (O(n) [optional - if u want to indentify missing and repeating no.])
    // s.c : O(1)...
    int n = a.size();
    int val1 = 0; // X^Y
    // calculating  X^Y...
    for (int i = 0; i < n; i++){
        val1 ^= a[i];
        val1 ^= i+1;
    }
    
    // Find the set bit index;
    int bitIdx = 0;
    while(bitIdx < 32){
        if((val1 & (1<<bitIdx)) != 0){
            break;
        }
        bitIdx++;
    }

    // differentiate basis of the bitIdx (whether the bit is 0 or 1)...
    int value1 = 0, val2 = 0;
    for (int i = 0; i < n; i++)
    {   
        if(((a[i] & (1<<bitIdx)) != 0)){
            val2 ^= a[i];
        }
        else value1 ^= a[i];

        if(((i+1) & (1<<bitIdx)) != 0){
            val2 ^= i+1;
        }
        else value1 ^= i+1;
    }
    
    // You can easily differentiate which is missing value or repeating value (becauz repeating value will appear 2 times in arr)...
    int cnt = 0, repeatingVal = -1, missingVal = -1;
    for (int i = 0; i < n; i++)
    {
        if(value1 == a[i]) cnt++;
    }

    if(cnt == 2){
        repeatingVal = value1;
        missingVal = val2;
    }
    else{
        repeatingVal = val2;
        missingVal = value1;
    }

    return {missingVal,repeatingVal};
}
int main(){
    int n1;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n1;
    vector<int>a(n1);
    cout<<"Enter the value of the array: "<<endl;
    for (int i = 0; i < n1; i++) cin>>a[i]; 
  
    vector<int> ans = missingAnsRepeatingNumbers_OP2(a);
    for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
  
    return 0;
}
