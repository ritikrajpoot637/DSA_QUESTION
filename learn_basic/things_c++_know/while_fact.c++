#include<bits\stdc++.h>
using namespace std;

int main(){
    int x;
    
    cout<<"enter the x";
    cin>>x;
    // enter the value
   int  fact=1; 
    while(x>=1){
         fact=fact*x;
         x--;
    }

    cout<<fact;
}