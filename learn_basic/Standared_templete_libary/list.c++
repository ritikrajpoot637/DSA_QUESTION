#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>li;
 
    for(int i=0;i<10;i++){
        li.push_back(i);
    }


    for(int i=0;i<10;i++){
        li.push_front(i);
    }
    list<int>li1(li);
    while(li.empty()!=1){
        cout<<li.back();
         li.pop_back();

    }
    cout<<endl;

    while(li1.empty()!=1){
        cout<<li1.front();
        li1.pop_front();
    }
    
    
}