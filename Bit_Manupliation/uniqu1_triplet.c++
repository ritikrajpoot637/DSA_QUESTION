#include<bits/stdc++.h>
using namespace std;
 
 int unique_on_triplet(int a[],int n){
    int result=0;
    for(int i=0;i<64;i++){

      int sum=0;

      for(int j=0;j<n;j++){
            if(a[j]&(1<<i)){sum++;}
      }

      if(sum%3!=0){result=result|(1<<i);}
    }
    return result;
 }

int main(){
  int a[]={2,2,1,5,3,3,3,2};
  cout<<unique_on_triplet(a,8);
}