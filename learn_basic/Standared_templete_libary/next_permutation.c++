#include<bits/stdc++.h>
using namespace std;
void print_array(int a[]){
    
    for(int i=0;i<2;i++){
        cout<<a[i];
    }
    cout<<endl;

}
int main(){
    int a[2]={1,2};
    print_array(a);
    next_permutation(a,a+2);
    print_array(a);
    next_permutation(a,a+2);
    print_array(a);
    next_permutation(a,a+2);
    print_array(a);
}