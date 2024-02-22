#include<bits/stdc++.h>
using namespace std;

void look(int a[]){
    int flag=0;
    int sum=0;
    for(int i=0;i<(1<<3);i++){

        for(int j=0;j<3;j++){
            if((i&(1<<j))!=0){sum+=a[j];}
            else{sum= sum-a[j];}
        }

        if((sum%360)==0){flag=1; break;}
    }
    if(flag==0){cout<<"not"<<endl;}
    else{cout<<"yes"<<endl;}
}

int main(){
    int a[]={10,20,30};
    look(a);
}