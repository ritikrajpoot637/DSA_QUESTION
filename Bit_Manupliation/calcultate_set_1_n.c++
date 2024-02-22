#include<bits/stdc++.h>
using namespace std;
int hipower(int n){
    int count=0;
    while((1<<count)<=n){count++;}
    return count-1;
}

int set_1_to_n(int n){
    if(n==0){return 0;}
    int x=hipower(n);

    // set upto high power
    int highpow=(1<<(x-1))*x;
    // left one 
    int leftone=(n-(1<<x)+1);
    // rest 
    int rest=n-(1<<x);

    int ans=highpow+leftone+set_1_to_n(rest);
    return ans;
    

}
int main(){
 int n=11;
 cout<<set_1_to_n(11);  

}