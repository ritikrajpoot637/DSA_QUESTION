#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;

    for(int i=0;i<10;i++){
        s.push(i);
    }

    int size=s.size();
    for(int i=0;i<size;i++){
        cout<<s.top();
        s.pop();
    }
}