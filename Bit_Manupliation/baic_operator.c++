#include<bits/stdc++.h>

using namespace std;

int main(){
    // & opeartor
    int a=7;
    int b=8;
    if((a&b)==0){cout<<"print";}

    // | operator
    int x=1;
    int y=0;
    if((x|y)!=0){cout<<"printl"<<endl;}

    // ^ xor
    int p=7;
    int q=7;
    int c=p^q;
    if((p^q)==0){cout<<"that xor here";}
    if(c==0){cout<<"that xor is without if";
    }


    // ` operator for negation

    int k=7;
    cout<<~k;


    // right shift >>

    // a=7;
    
    int r=(5>>1);
    cout<<r;

    // >> gives divide on times by 2;
      int times=3;
      cout<<(10>>times);


    // << gives multiply on times by 2;


      cout<<(5<<2);
        





}