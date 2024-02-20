#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq_max_heap;
    priority_queue<int,vector<int>,greater<int>>pq_min_heap;
      
    for(int i=0;i<10;i++){
        pq_max_heap.push(i);
        pq_min_heap.push(i);
    }
     
     while(pq_max_heap.empty()!=1){
       cout<<pq_max_heap.top();
       pq_max_heap.pop();
     }

     cout<<"\n";
     while(pq_min_heap.empty()!=1){
        cout<<pq_min_heap.top();
        pq_min_heap.pop();
     }
    
}