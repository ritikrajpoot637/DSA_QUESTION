#include<bits/stdc++.h>
using namespace std;
 int add(int n ,int add_pos_bit){
    n=n|(1<<add_pos_bit);
    return n;
 }

 int remove(int n,int rem_pos_bit){
    n=(n&~(1<<rem_pos_bit));
    return n;
 }

 int print(int n){
    for(int i=0;i<32;i++){
      if(n&(1<<i)){cout<<i<<endl;}
    }
 }


int main(){
    int n=0;
    cout<<add(0,5);
    cout<<remove(32,5);
    print(32);
}