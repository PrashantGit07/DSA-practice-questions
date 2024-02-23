#include<bits/stdc++.h>
// writing iterator codes int short
using namespace std;
int main(){
       vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();
    cout<<(*it)<<endl;
    cout<<"printig array by iteration through pointer"<<endl;
    for(it = v.begin() ; it !=v.end() ; ++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;

        // range based loops 
        cout<<"printing through range based loops "<<endl;
        // for(int value : v){
            //   value++;.......it will not work 
        //     cout<<value<<" ";
        //     //it is not actual value but a copy of value
        // }
        for(int &value : v){
            value++;
            // now it will work 
            cout<<value<<" ";
        }
        cout<<endl;

        // for pairs 
        vector<pair<int , int>> vp = {{1,2} , {3,4} , {5,6}};
         cout<<"printig of pair"<<endl;
         for(pair<int,int> &value : vp){
            cout<<value.first<< " "<<value.second<<endl;
         }
return 0;
}