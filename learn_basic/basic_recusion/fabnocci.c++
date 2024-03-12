#include<bits/stdc++.h>
using namespace std;

int a=0;
int b=1;
int i=0;
vector<int>v;

void fact(int N){
    if(i>=N-1){return;}
    int c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
    i++;
    return fact(N);

}
vector<int> fact1(int n,int i,vector<int> &g ){
    if(i>=n-1){return v;}
    int c=a+b;
    g.push_back(c);
    a=b;
    b=c;
    return fact1(n,i+1,g);
       
}

int main(){
  cout<<a<<endl<<b<<endl;
  //fact(6);
  fact1(6,0,v);
  for(auto el:v){
    cout<<el<<endl;
  }

}