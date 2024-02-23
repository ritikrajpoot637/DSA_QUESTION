#include<bits/stdc++.h>
using namespace std;
// time complisit o(n)
int while_loop(int n){
    int count=0;
    while (n!=0)
    {
        /* code */
        n=n/10;
        count++;
    }
    return count;
    
    
}

// method to string
int strx(int n){
    string xp=to_string(n);
    return xp.size();

}

// mthod flor o(1)

int flor(int n){
    int digit =floor(log10(n)+1);
    return digit;
}
int main(){
   cout<<while_loop(12345)<<endl;
   cout<<strx(12345)<<endl;
   cout<<flor(12345)<<endl;
}