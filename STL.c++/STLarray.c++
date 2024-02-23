 #include<iostream>
// we have to include headerfile for array
#include<array>
using namespace std;
int main(){
    //for array
    array<int , 4> a = {1,2,3,4};
    //name of array is [a]
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"element at nth(let 2nd) index -->"<<a.at( 2 )<<endl ; 
    cout<<"emepty or not -->"<<a.empty()<<endl;
    cout<<"first element-->"<<a.front()<<endl;
    cout<<"last element-->"<<a.back()<<endl;
   
   
    
    
return 0;
}