#include<iostream>
using namespace std;

int PivotElement(int arr[] , int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid + 1;
             
        }
        else{
            e = mid;
        }
     mid = s+(e-s)/2;

    }
    return s;
    
}
int main(){
    int arr[5]={2,3,8,7,1};
    cout<<"Pivot element is : "<<PivotElement(arr , 5)<<endl;
    return 0 ;
}
// int start = 0;
//     int end = size-1;
//     int mid = (start+(end-start)/2);
//     while (start<=end)
//     {
//         if(arr[mid]==key){
//             return mid;
//         }
//         //go to right part
//         if(key>arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid =  (start+(end-start)/2);
//     }
//     return -1;