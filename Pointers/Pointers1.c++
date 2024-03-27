#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={4,5,6,7,8,9};
    cout<<"Address of first location : "<<arr<<endl;
    cout<<"Address of the location  :"<<&arr<<endl;
    cout<<"value at first index : "<<arr[0]<<endl;

    cout<<"value at :"<<*arr<<endl;  //it will give the value at first index
    cout<<"value at :"<<*arr+1<<endl; //it will add 1 in the value at first index

    cout<<"value at :"<<*(arr+1)<<endl; //it will give the value at second index because of braces it will be considered as the whole index not an operation to add 1 in the value


    //so we have a formula here

    // arr[i] = *(arr+i);

    // or

    //i[arr] = *(i+arr)


return 0;
}