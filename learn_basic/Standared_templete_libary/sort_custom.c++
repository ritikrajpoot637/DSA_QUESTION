#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int>&a,const pair<int ,int>&b){
    return (a.second<b.second);
}

int main(){
    // specially method to sort on custum basis

    vector<pair<int,int>>v={{1,2},{3,4},{5,6}};

    // now we want to sort on the basis of second element on pair

    // we build sortbysec function for sort parameter passing to do sort on it according 
    sort(v.begin(),v.end(),sortbysec);
    for(int i=0;i<3;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}