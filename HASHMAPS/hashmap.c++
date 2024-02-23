#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<string ,int> m;
    pair<string , int> p  = make_pair("babbar" , 3);
    m.insert(p);
    //2

    pair<string , int> pr("prashant" , 2);
    m.insert(pr);


    //3
    m["babbar"] = 1;
    cout<<m["babbar"] <<endl;
    

    cout<<m.at("prashant")<<endl;


    //check size
    cout<<m.size()<<endl;


    // check prersence
    cout<<m.count("bro")<<endl;


    //erase
    // cout<<m.erase("prashant")<<endl;
    // cout<<m.size();

    //traverse
    // for(auto i:m){
    //      cout<<i.first<<" "<<i.second<<endl;
    // }

    unordered_map<string , int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }

return 0;
}