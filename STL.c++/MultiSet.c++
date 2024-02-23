#include<bits/stdc++.h>
using namespace std;
 void print(multiset<string> &s){
      for(string value : s){
        cout<<value<<endl;
      }
}
int main(){
    multiset<string> s;
    
    s.insert("adbc");      //log(n)....insert and store
    s.insert("xbc");
    s.insert("dbc");
    s.insert("adbc"); 
    auto it = s.find("adbc");
    // if(it!=s.end()){
    //     s.erase(it);   //deletes only that value which is pointed by this iterator
    // }
    s.erase("adbc");     //deletes all the values which is adbc
    print(s);
}