#include<bits/stdc++.h>
using namespace std;

void gready(int n){
    int a,b,c;
     for(int i=2;i*i<=n;i++){
        if(n%i==0){a=i; break;}
     }
     n=n/a;
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i!=a){
                b=min(b,i);
            }
            if((n/i)!=a){
                b=min(b,n/i);
            }
        }
     }

     c=n/b;
     cout<<a<<b<<c<<endl;
     if((a)!=(b)!=(c)!=1){cout<<"yes";}
     else{cout<<"no";}

}
int main(){
    gready(64);
}