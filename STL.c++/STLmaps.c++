#include<bits/stdc++.h>
using namespace std;
 void print(map<int,string> &m){
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
 }
int main(){
    map<int , string> m;
    m[1]  = {"abc"};  //O(log n)
    m[5]  = {"def"};
    m[3]  = {"apple"};

    // map doesn't store repeated key , it rather replaces older value in the key

    m[5] = {"cde"};
    // another method 
    m.insert({4,"gfg"}); 
    // m.erase(3);    ////O(log n)

    
    // for(auto &pr : m){
    //     cout<<pr.first<<" "<<pr.second<<endl;  //access time complexity is also O(log n)
    // }
    auto it = m.find(3);
    if(it != m.end()){
        m.erase(it);
    }
    m.clear();
    print(m);

    // to find the value 
    // auto it =  m.find(3);
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    // if(it != m.end()){
    //     m.erase(it);
    // }

    //if value is not present , it returns the (end)

    //to erase the value


    //to clear complete map

    

   
return 0;
}
