#include<bits/stdc++.h>
using namespace std;

void powerset(int a[],int n){
    
    for(int i=0 ; i<(1<<n);i++){

        vector<int>ds;

        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                ds.push_back(a[j]);
            }
        }
        cout<<"{";
        for(int k=0;k<ds.size();k++){
            cout<<ds[k];
           if(k<ds.size()-1) cout<<",";
        }
        cout<<"}";

    }
}



int main(){
    int a[]={1,2,3};
     powerset(a,3);

}