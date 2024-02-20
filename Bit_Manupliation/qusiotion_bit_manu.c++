#include<bits/stdc++.h>
using namespace std;


int main(){
    //  prgrame to find an array of unique elemnt on  time

       int c=0;
       int a[]={1,4,4,7,7};
       for(auto it :a){
        c=c^it;
       }

       cout<<c<<endl;

       // programe to swaps without third variable

       int p=7;
       int q=5;
       p=p^q;
       q=p^q;
       p=p^q;

       cout<<"p is "<<p<<"q is "<<q;

       // prorame to print xor of all number upto n given not bruthh forc

      /* cout<<endl<<"enter the number"<<endl;
       int num;
       cin>>num;
       if((num%4)==1){cout<<" xor is "<<1;}
       if((num%4)==3){cout<<" xor is "<<0;}
       if((num%4)==0){cout<<" xor is "<<num;}
       if((num%4)==4){cout<<" xor is "<<0;}
        */

       // program to left and right range are given find xor in between

       //int l=5;
       //int r=2;

       // xor(5)*xor(2)

       // to chech odd and even 
      /* int num;
       cin>>num;
       if((num&1)==0){cout<<"its evn";}
       else{cout<<"its odd";}
       */

      // chech the ith bit 
      int num;
      cout<<"enter the number ";
      cin>>num;

      int ith;
      cout<<"enter the bit to chech";
      
      cin>> ith;

      if((num&(1<<ith))!=0){
        cout<<"set"<<endl;}
        else{cout<<"unset"<<endl;}


      


}