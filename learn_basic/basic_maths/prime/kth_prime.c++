#include<bits/stdc++.h>
using namespace std;


long n=86028121;
bool sive[86028121+1];
void create_sive(){

    for(long i=2;i<=n;i++){
        sive[i]=true;
    }
    for(long i=2;i*i<=n;i++){
        if(sive[i]==true){
            for(long j=i*i;j<=n;j+=i){
                sive[j]=false;
            }
        }
    }

}

void six(){
   long  lt=5000000; int count=0;int sixe=0;
   for(long i=0;;i++){
      if(sive[i]==true){count++;}
      if(count==lt){sixe=i;break;}
   }
       cout<<sixe<<endl;
}
vector<int>ds;
void crete_ds(){
    for(int i=2;i<=86028121;i++){
        if(sive[i]==true){ds.push_back(i);
    }
}
}

int main(){
    
    create_sive();
    //six();
    crete_ds();
    int k;
    cin>>k;
    cout<<ds[k-1];
    

    

}