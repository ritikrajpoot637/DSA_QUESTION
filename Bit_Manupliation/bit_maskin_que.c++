#include<bits/stdc++.h>
using  namespace std;
void check_odd_even(int num){
    if((num&1)==0){cout<<"even";}
    else{cout<<"odd";}
    cout<<endl;
}

void chek_bit(int num,int i){
    if((num&(1<<i))!=0){cout<<"set"<<endl;}
    else{cout<<"unset"<<endl;}

}
void set_ith_bit(int num,int i){
    int n=(num|(1<<i));
    cout<<n<<endl;
}

void clear_ith_bit(int num ,int i){
    int n=(num&~(1<<i));
    cout<<n<<endl;
 }

 void remove_last_bit(int num){
    int n=(num&(num-1));
    cout<<n<<endl;
 }

 void check_power2(int num){
    if((num&(num-1))==0){cout<<"pow_2"<<endl;}
    else{cout<<"not_pow-2"<<endl;}
 }

 void count_bit(int num){
    int count=0;
    while(num!=0){
        if((num&1)==0){count++;}
        num=num>>1;
    }
    cout<<count<<endl;
 }
int main(){
    
 // if odd even n&1==0 even;
   check_odd_even(12);

   // chekc ith bit of num  ;
   // used n&(1<<i)!=0 -> set
   
    chek_bit(12,3);

    // set the ith bit num|(1<<i)=num;
     set_ith_bit(12,1);

     // clear the ith bit of num&~(1<<i);
      clear_ith_bit(14,1);     
    
    // remove the last bit num&(num-1);
       remove_last_bit(14);
     
     // power of 2;
     check_power2(16);


    // count the bits onse
    // method one __builtin_popcount();
     cout<<(__builtin_popcount(12))<<endl;

     // method two
     // while (n!=0){if(n&1)==0}count++ ;n=n>>1}
     
     count_bit(12);
     


}
