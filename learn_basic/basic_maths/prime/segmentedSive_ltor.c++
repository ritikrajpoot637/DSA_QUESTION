#include<bits/stdc++.h>
using  namespace std;

bool sive[1000001];
int n=1000000;

void create_sive(){
    for(int i=2;i<=n;i++){
        sive[i]=true;
    }

    for(int i=2;i*i<=n;i++){
        if(sive[i]==true){
            for(int j=i*i;j<=n;j+=i){
            
                    sive[j]=false;
                
            }

        }
    }
}
// step 1 generate vector;

vector <int> generate_prime(int num){
    vector<int>ds;
    for(int i=2;i<=num;i++){
        if(sive[i]==true){ds.push_back(i);}

    }
    return ds;
}

int main(){
 create_sive();
 int l,r;
 cin>>l>>r;
 vector<int>store=generate_prime(sqrt(r));

 // step 2 create a dummy array of size r-l+1;

 int dummy[r-l+1];
 for(int i=0;i<r-l+1;i++){
    dummy[i]=1;
 }

 // mark all multiple of primes 

 for(auto pr:store){

    int first_muti=(l/pr)*pr;
    if(first_muti<l){first_muti=first_muti+pr;}

    for(int i=max(first_muti,pr*pr);i<=r;i+=pr){
        dummy[i-l]=0;
    }
 }

 for(int i=0;i<r-l+1;i++){
    if(dummy[i]==1){cout<<i+l<<endl;}
 }

}