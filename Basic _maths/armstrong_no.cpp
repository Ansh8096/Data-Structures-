#include<bits/stdc++.h>
using namespace std;
void explain_armstrong_no(int n){
    string digits=to_string(n); // we create a string object and add n to it...
    int cnt=digits.size(); // with the help of this we can determine the size of a string... 
    int sum=0;
    int dup=n;
    while (n>0)
    {
       int lastdigit = n%10;
       sum=sum+pow(lastdigit,cnt);
       n=n/10;
    }
    cout<<sum<<endl;
    if(dup==sum) 
    {
    cout<<"true";
    }
    else cout<<"false"; 
}
int main(){
    int a;
    cout<<"enter the value: "<<endl;
    cin>>a;
    explain_armstrong_no(a);
    return 0;
}
