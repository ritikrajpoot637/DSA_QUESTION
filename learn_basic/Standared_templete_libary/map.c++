#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>om;

    for(int i=0;i<10;i++){
        om.insert({i,i*10});

    }

    for(auto it=om.begin();it!=om.end();it++){
        cout<<"key"<<it->first<<" "<<"value :"<<it->second<<endl;
    }
}