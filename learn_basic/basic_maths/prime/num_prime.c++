#include<bits/stdc++.h>
using namespace std;
// burte force method o(n)
void prime_yes_no(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){count++;}
    }
    if(count==2){cout<<"yes"<<endl;}
    else{cout<<"no"<<endl;}
}


// method secound  sqrt(n) usesd i*i<n;
// fact=i -> fact secound =n/i;
// o(logn*sqrroot)
void prime_yes_no_sq(int n){
    int count=0;
     for(int i=2;i*i<=n;i++){
        if(n%i==0){count++;
                  if((n%i)!=i){count++;}
                  }
     }
     if(count==0){cout<<"yes"<<endl;}
     else{cout<<"no"<<endl;}
}


void print_all_factor(int n){
    
    for(int i=1;i*i<=n;i++){
        if(n%i==0){cout<<"fator1: "<<i<<endl;
                 if((n/i)!=i){cout<<"factor2: "<<n/i<<endl;}
        }
    }
}

int main(){
    prime_yes_no(7);
    prime_yes_no_sq(36);
    print_all_factor(36);
}