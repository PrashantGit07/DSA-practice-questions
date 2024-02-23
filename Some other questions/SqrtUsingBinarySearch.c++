#include<iostream>
using namespace std;
long long int BinarySearch(int n){
    int s=0;
    int e=n-1;
    int ans = -1;
    long long int mid = s + (e-s)/2;
    while (s<e)
    {
           long long int Square = mid*mid;
           // here after multiplying mid * mid , it can excede range of int  , so we will use long long int
           if(Square==n)
              return  mid;
           if(Square<n){
            ans = mid;
             s = mid+1;
           }
           else{
            e = mid-1;
           }
             
            mid = s + (e-s)/2; 

    }
    return ans;
    
}
int Sqrt(int x){
    return BinarySearch(x);
}
int main(){
     int x;
     cout<<"enter the number : ";
     cin>>x;
     cout<<"square root of the number is : "<<Sqrt(x);
return 0;
}