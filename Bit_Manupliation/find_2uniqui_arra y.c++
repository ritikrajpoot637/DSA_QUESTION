#include<bits/stdc++.h>

using namespace std;
// print  2 unique elemmtn in array
// method 1 brute force

vector<int> uniqe_brute(int n[]){
    vector<int>b;
    for(int i=0;i<10;i++){
       int count=0;
       for(int j=0;j<10;j++){
        if(n[i]==n[j]){count++;}
        if(count==2){break;}
       }
       if(count==1){b.push_back(n[i]);}
    }
    return b;
}

void map_solver(int n[]){
    map<int,int>mpp;
    for(int i=0;i<11;i++){
        mpp[n[i]]++;
    }

    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl<<endl<<endl;
    for(auto it:mpp){
        if(it.second==1){cout<<it.first<<endl;}
    }
}

void bit_solver(int n[]){
    int xrr=0;
    for(int i=0;i<10;i++){
        xrr=xrr^n[i];
    }
     int count=0;
    while(xrr!=0){
        if((xrr&1)==1){break;}
        xrr=xrr>>1;
        count++;
    }
    int xor1=0,xor2=0;
     cout<<count<<endl;
    for(int i=0;i<10;i++){
        if((n[i]&(1<<count))){xor1=xor1^n[i];}
        else{xor2=xor2^n[i];}
        //cout<<endl<<xor1<<"  "<<xor2;
    }
    cout<<xor1<<"   "<<xor2<<endl;
    

}

int main(){
    int n[]={1,3,1,2,5,3,2,4,7,4};
    // method 1; timee complexity o(n^2);
   /* vector<int>c;
    c=uniqe_brute(n);
    for(auto it:c){
        cout<<it<<endl;
    }
    */


   // method 2; by mapping by o(nlogn);
 // map_solver(n);   

  // method 3 by bit manuplication by o(n);
   bit_solver(n);
}