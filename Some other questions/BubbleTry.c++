#include<iostream>
using namespace std;
void Print(int arr[] , int n ){
    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void BubbleSort(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        
    }
    
}
int main(){
    int arr[6] = {4,5,9,2,3,7};
    BubbleSort(arr , 6);
    cout<<"the array is : ";
    Print(arr , 6);
return 0;
}
// #include<iostream>
// using namespace std;
// void Print(char arr[] , int n ){
//     for (int i = 0; i < n-1; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// void BubbleSort(char arr[] , int n){
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j <n-i-1; j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
        
//     }
    
// }
// int main(){
//     char arr[6] = {a,b,d,e,c,f};
//     BubbleSort(arr , 6);
//     cout<<"the array is : ";
//     Print(arr , 6);
// return 0;
// }
