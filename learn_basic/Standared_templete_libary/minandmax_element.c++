#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1,2,3,4,6};
    auto it1=min_element(a,a+5);
    auto it2=max_element(a,a+5);
    cout<<*it1<<" "<<*it2;


}