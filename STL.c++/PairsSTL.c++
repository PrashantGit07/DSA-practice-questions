#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,string> p;
    // pair<int,string> &p1 = p;
    // // pair is used tp store to diffrent typews of data types 
    // // put values in pair 
    // // p = make_pair(2 , "Prashant Mishra");
    // p = {2 , "abc"};
    // cout<< p.first<<" "<<p.second<<" "<<endl;
    // cout<< p1.first<<" "<<p1.second<<" "<<endl;
    // return 0;


    pair<int , int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    // we can swap as well 
    swap(p_array[0] , p_array[2]);

     for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

     }
}