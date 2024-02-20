#include<bits/stdc++.h>
using namespace std;
void print_deque_fq(deque<int>dq){
    for(auto it:dq){
        cout<<it<<endl;
    }
}
void print_deque_reverse(deque<int>dq){
    while(dq.empty()!=1){
        cout<<dq.back();
        dq.pop_back();
    }
}

int main(){
    deque<int>dq;
    for(int i=0;i<10;i++){
        dq.push_back(i);
    }
    print_deque_fq(dq);
    print_deque_reverse(dq);
}