#include<bits/stdc++.h>
using namespace std;

int main(){

    // only one pair
    pair<int,int>p;
    p={1,2};
    cout<<p.second; 
    // pair nesting 
    pair<int,pair<int,int>>p1;
    p1={1,{2,3}};
    cout<<p1.second.first;
    // multipari same type

    pair<int,int>arr[]={{1,2},{3,4}};
    cout<<arr[1].second;



}