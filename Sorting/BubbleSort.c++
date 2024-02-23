 #include<iostream>
 using namespace std;
 void Bubble(int arr[0 ], int n){
    for (int i = 1; i < n; i++)
    {
        for(int j = 0 ; j<n-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    
 }
 void print(int arr[]  ,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }
 int main(){
     int arr[5] = {7,8,2,43,1};
     Bubble(arr , 5);
     cout<<"sorted array is  :";
     print(arr , 5);
 return 0;
 }



//  #include<iostream>
//  using namespace std;
//  void BubbleSort(int arr[] , int n ){
//     for (int i = 1; i <n; i++)
//     {
//         for(int j = 0; j<n-i ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
    
//  }
//  void print(int arr[] , int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//  }
//  int main(){
//     int arr[5] = {7,8,1,2,5};
//     BubbleSort(arr , 5);
//     cout<<"the array is : ";
//     print(arr  ,5);
//  return 0;
//  }


 