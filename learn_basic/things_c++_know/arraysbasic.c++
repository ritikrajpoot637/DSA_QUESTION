#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[5];
    int m=(sizeof(a)/sizeof(a[0]));
    cout<<m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cout<<a[i];
    }
}