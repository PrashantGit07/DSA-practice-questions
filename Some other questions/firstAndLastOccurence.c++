//  first and last position/occurenece of a number

#include<iostream>
using namespace std;
int FirstOcc(int* arr , int size , int key){
    int ans= -1;
    int start =0;
    int end = size-1;
    int mid = (start + (end-start)/2);


    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;    //because we need left most occurernce
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        int mid = (start + (end-start)/2);

    }
    return ans;
} 
    

int LastOcc(int* arr , int size , int key){
    int start = 0;
    int ans  = -1;
    int end = size-1;
    int mid = (start+(end-start)/2);
    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;   // because we need right most occurence
        }
        //go to right part
        if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid =  (start+(end-start)/2);
    }
    return ans;
    
}
int main(){

int even[6]={2,4,4,6,8,12};
int odd[5]={3,8,11,14,16};

cout<<"first occurence of 4 is : "<<FirstOcc(even , 6 , 4)<<endl;
cout<<"last occurence of 4 is : "<<LastOcc(even , 6 , 4);
return 0;
}