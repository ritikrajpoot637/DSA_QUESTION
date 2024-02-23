#include<bits/stdc++.h>
using namespace std;

bool sive[100001];
int n=100000;
void check_sive(){
for(int i=2;i<=n;i++){

    sive[i]=true;

}
for(int i=2;i*i<=n;i++){
    if(sive[i]==true){

        for(int j=i*i;j<=n;j=j+i){
            sive[j]=false;
        }
    }
}


}
int main(){
   check_sive();
   int t;
   cin>>t;
   while(t--){
    int a;
    cin>>a;
    if(sive[a]){cout<<"yes";}
    else{cout<<"no";}
   }
   
    return 0;
}    
