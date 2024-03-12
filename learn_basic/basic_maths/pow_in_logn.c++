#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,n;
    cin>>x>>n;
    int nm;
    double ans=1;
    if(n>0){
       nm=n;
    }
    else{
        nm=-1*n;
    }

    while(nm){
        if(nm%2==0){
            x=x*x;
            nm=nm/2;

        }
        else{
            nm=nm-1;
            ans=ans*x;
            
        }
    
    }
    cout<<ans<<" ";


}