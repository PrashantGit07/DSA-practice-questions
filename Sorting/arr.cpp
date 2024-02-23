#include<iostream>
using namespace std;
int maximum(int arr[], int size){
    int maxi=INT8_MIN;
    for(int i=0;i<size;i++){
        maxi=max(arr[i],maxi);
    }
    return maxi;
}

int minimum(int arr[], int size){
    int maxi=INT8_MIN;
    for(int i=0;i<size;i++){
        maxi=max(arr[i],maxi);
    }
    return maxi;
}
int main(){
    int arr[10],size;
    cout<<"ENter size";
    cin>>size;
    cout<<"Enter Elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"maximum element is : "<<maximum(arr,size);
return 0;
}