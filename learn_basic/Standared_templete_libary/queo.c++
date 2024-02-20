#include<bits/stdc++.h>
using namespace std;
void print_queo(queue<int>q){
    queue<int>q1(q);
    while(q1.empty()!=1){
       cout<<q1.front()<<endl;
       q1.pop();
    }
}
int main(){
    queue<int>q;

    // for insersation
    for(int i=0;i<10;i++){
        q.push(i);
    }
      print_queo(q);
    
}