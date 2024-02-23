//vector is dynamic , means if its size is 5 ansd we want to insert 6 element thwn automatically it will double its size and elements of old vector will be transferrd to new one and old vectors will be deleted

#include<iostream>
//add headerfile of vector
#include<vector>
using namespace std;
int main(){
    //declare
    vector<int> v ;
    cout<<"size->"<<v.capacity()<<endl; //it will show 0 , becase we havn't initialized it
     
    //so to insert any element in vector , we use pushback

    v.push_back(1);
     cout<<"capacity->"<<v.capacity()<<endl; 

    v.push_back(2);
     cout<<"capacity->"<<v.capacity()<<endl; 

     v.push_back(5);
     cout<<"capacity->"<<v.capacity()<<endl; //this will show size 4 because of above property
     cout<<"size->"<<v. size()<<endl; 

    // we can do same operation like array(front back etc.)
    
     
    
return 0;
}