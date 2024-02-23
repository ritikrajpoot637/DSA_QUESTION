#include<bits/stdc++.h>
using namespace std;
int sive[1000001];
int n=1000000;

void create_sive(){
    for(int i=2;i<=n;i++){
        sive[i]=1;
    }
    
    for(int i=2;i*i<=n;i++){
        if(sive[i]==1){
        for(int j=i*i;j<=n;j+=i){
        if(sive[j]!=0){sive[i]++;
                        sive[j]=0;}
        } 
        }
    }

}



int main(){
    int k;
    cin>>k;
    create_sive();
    cout<<sive[k];
}