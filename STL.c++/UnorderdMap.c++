#include<bits/stdc++.h>
using namespace std;

// in unordered_map , elements are basically stored in random order 
// they used hash table im inbuilt implementation
// time complexity of all function is O(1)

 void print(unordered_map<int,string> &m){
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
 }
int main(){
    unordered_map<int,string> m;
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
    // auto it = m.find(3);
    // if(it != m.end()){
    //     m.erase(it);
    // }
    // m.clear();
    print(m);
}