#include<bits/stdc++.h>
using namespace std;

int main(){

    // me#thod 1;

    int n;
    cout<<"enter the number";
    cin>>n;
    int m2=n;

    //method one
    int count=0; 
    while(n>0){
        if(1&n){count++;}
        n=n>>1;
    }

    cout<<count<<endl;
 
    // method 2 
    // by using built function __builtin_popcount();
    int x=__builtin_popcount(m2);
    cout<<x;
}