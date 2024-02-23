#include<iostream>
using namespace std;
void printArray(int arr[], int n  ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void SwapAlternate(int arr[],  int size){
    int s=0;
    int e=size-1;
     for (int i = 0; i < size-1; i++)
     {
        swap(arr[s] , arr[e]);
     }
     
    // for (int i = 0; i <3; i+=2)
    // {
    //     if(i+1<size){
    //         swap(arr[i] , arr[i+1]);
    //     }
    // }
    
}
 
int main(){
    int arr[6]={1,2,3,4,5,6};
    // sizeof(arr)
     SwapAlternate(arr , 6);
     printArray(arr , 6);
return 0;
}
