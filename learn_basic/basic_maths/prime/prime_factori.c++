#include<bits/stdc++.h>
using namespace std;

// method 1 o(n) 
void pf_m1(int n){
    for(int i=2;i<=n;i++){
        while (n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        
    }
    cout<<endl;
}
// method 2 squr o(sqrt(n))

void pf_m2(int n){
    
    for(int i=2;i*i<=n;i++){
        while (n%i==0)
        {
            cout<<i<<" ";
            n=n/i;;
        }
        
    }
    if(n>1){cout<<n;}
    cout<<endl;
}

// method 3 by sive;
// O(logn);
int n=1000000;
int sive[1000001];

void create_sive(){
    for(int i=2;i<=n;i++){
        sive[i]=i;
    }
    
    for(int i=2;i*i<=n;i++){
        if(sive[i]==i){
            for(int j=i*i;j<=n;j+=i){
              if(sive[j]==j){sive[j]=i;}
            }
        }
    }
}

void pf_m3(int n){
    create_sive();
    while(n!=1){
         int x=sive[n];
         cout<<x<<" ";
         n=n/x;
    }
}

int main(){
    pf_m1(24);
    pf_m2(24);
    pf_m3(24);
}