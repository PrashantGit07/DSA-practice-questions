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
int BinarySearch(int* arr , int s , int e , int key){
    int start = s;
    int end = e;
    int mid = (start+(end-start)/2);
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        //go to right part
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid =  (start+(end-start)/2);
    }
    return -1;
    
}
int findPosition(int arr[] , int n , int key){
    int Pivot = PivotElement(arr , n);
    if(key>=arr[Pivot] && key<= arr[n-1]){
        //binary search in second line
        return BinarySearch(arr , Pivot , n-1 , key);
    }
    else{
        // binary seach in first line
        return BinarySearch(arr , 0 , Pivot-1 , key);
    }
}
int main(){
    int arr[5] = {7,9,1,2,3};
    int key;
    cout<<"enter the key to search : ";
    cin>>key;
    cout<<"The key is at : "<<findPosition(arr , 5 , key)<<endl;
return 0;
}