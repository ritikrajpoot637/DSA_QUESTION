#include<bits/stdc++.h>
using namespace std;

int main(){
    //set is continner store unque element in particluar order
      set<int>s;
    for(int i=0;i<5;i++){
        s.insert(i);
    }

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it;
    }
}