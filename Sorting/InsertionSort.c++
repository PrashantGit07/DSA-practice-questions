#include<iostream>
using namespace std;
void InsertionSort(int arr[]  ,int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
       for( ;j>=0;j--){
          
         if(arr[j]>temp){
            arr[j+1] = arr[j];
         }
          else{
            break;
          }
       }
      arr[j+1] = temp;
    }
}
void print(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5] = {7,8,5,4,3};
    InsertionSort(arr , 5);
    cout<<"the sorted array is :";
    print(arr , 5);
return 0;
}