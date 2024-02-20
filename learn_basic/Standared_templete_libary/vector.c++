#include<bits/stdc++.h>
using namespace std;

int main(){
    // decelartion of vector similar to array
    // vector<data type>name of vector
    vector<int>v;
    // begin function to ittertion at begaining similarly end
    auto ite =v.begin();
    auto iit =v.end();
    // push_back function to add on  last of array

    v.push_back(2);
    cout<<v[0]<<"\n";
    v.push_back(3);
    cout<<v[1]<<endl;
      // for each loop for traditional print 
    for(auto it :v){
      cout<<it;
    }
    // pop_back fuction to deleate in last

    v.pop_back();
    // size and for method to print vector;
       cout<<"size and for loop";
    for(int i=0;i<v.size();i++){
      cout<<v[i];
    }

    if(ite==iit){cout<<"only one element";}
    v.push_back(4);

   
    // itteritor method to traverse the loop
       cout<<"itterrior method";
    for(auto it =v.begin();it!=v.end();it++){
       cout<<*it;
    }
    // check empty
    cout<<v.empty();
    // give vector size and intialise its with 100
    vector <int > v1(5,100);
    for(auto it: v1){
      cout<<it;
    }
    // copy an array to ones 
    cout<<endl;
    vector <int> v3(v1);
    for(auto it : v3){
      cout<<it;
    }

    



    


}