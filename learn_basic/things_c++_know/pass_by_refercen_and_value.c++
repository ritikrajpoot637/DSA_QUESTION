#include<bits/stdc++.h>
using namespace std;
 void pass_by_value (int x){
    x=6;

}

void pass_by_reference(int *x){
    *x=6;
}

int main(){
    int a=5;
    pass_by_value(a);
    cout<<a<<"after pass by value";
    pass_by_reference(&a);
    cout<<a<<"after pass by referecne";
    return 0;

}