#include<bits/stdc++.h>
using namespace std;

int main(){
    //make calculator
    int x;
    cout<<" enter 1 for add";
    cout<<" enter 2 for sub";
    cin>>x;
    // enter number one 
    int a;
    // enter number two
    int b;
    cin>>a;
    cin>>b;

    switch(x){
        case 1: 
             cout<<a+b;
             break;
        case 2:
            cout<<a-b;
            break;
        default :
            cout<<"enter the valid number";                  
    }
    

}