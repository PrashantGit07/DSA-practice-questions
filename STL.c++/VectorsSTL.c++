#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
    
}

int main(){
    // vectors are continuous memory block that is used to alloacate memory dynamically
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
   
//    vector<int> v(10);
//    v.push_back(11); .......... size of v will be incresed dynamically
    vector<int> v(5);
    vector<int> v2 = v;
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);
}