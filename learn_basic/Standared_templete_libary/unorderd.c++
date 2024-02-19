#include<bits/stdc++.h>
using namespace std;
int  main(){
    unordered_set<int>os1;
     //insert the element by insert() function
    os1.insert(1);
    os1.insert(2);
    //check count for finding as printable
    cout<<os1.count(2);
    //deleate all element in s
    os1.clear();
    cout<<os1.count(1);
    cout<<os1.count(2);
    // used find 
    os1.insert(2);
    os1.insert(1);
    if(os1.find(2)!=os1.end()){cout<<"hellow";}

    // declare unordere set unordered_set<int>os1
    unordered_set<int>us2;
    // for loop for insersation its not position its give value
    for(int i=0;i<5;i++){
         us2.insert(i);
    }
           //print an unordered set by it and for loop
           cout<<"\n";
    for(auto it =us2.begin();it!=us2.end();it++){
        cout<<*it;
    }
    // for size return 
       cout<<"\n";
    cout<<"size"<<"\n";
    cout<<us2.size();

    // erase element at position us2.erase(position)
    us2.erase(us2.begin());
    // check empty by empty function 

    if(us2.empty()==false){cout<<"empty";}




    

}