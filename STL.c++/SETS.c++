#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
      for(string value : s){
        cout<<value<<endl;
      }
}
int main(){
    // set<string> s;
    
    // s.insert("adbc");      //log(n)....insert and store
    // s.insert("xbc");
    // s.insert("dbc");
    // // s.insert("adbc"); ...will not be printed as set stores on;y unique elements 
    // //access
    // auto it =  s.find("adbc");
    // if(it!=s.end()){
    //     // cout<<(*it)<<endl;
    //     s.erase("adbc");
    // }

    unordered_set<string>s;
    s.insert("adbc");      
    s.insert("xbc");
    s.insert("dbc");
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    string str;
    cin>>str;
    s.insert(str);
    
}
int q;
cin>>q;
while(q--){
    string str;
    cin>>str;
    if(s.find(str)==s.end()){
        cout<<"no"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }
}

return 0;
}

// like unorderd map , same functions of unorderd set


