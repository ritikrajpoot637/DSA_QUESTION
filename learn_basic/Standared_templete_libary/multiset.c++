#include<bits/stdc++.h>

using namespace std;

int main(){
    // multi set is a comtionor that stor elemnt order and duplicate

    multiset<int>ms;
    for(int i=0;i<5;i++){
        ms.insert(i);
    }
    // duplicate element
    ms.insert(4);

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it;
    }
}