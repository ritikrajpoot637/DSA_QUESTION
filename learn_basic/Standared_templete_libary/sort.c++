#include<bits/stdc++.h>
using namespace std;
void print_array(int a[]){
for(int i=0;i<5;i++){cout<<a[i];}
cout<<endl;
}


int main(){

    int a[5]={1,2,3,4,5};

    // sort in asscending order by defualt

    sort(a,a+5);

    print_array(a);
      // sort on desecding order by greater function
    sort(a,a+5,greater<int>());
    print_array(a);

    
     



}