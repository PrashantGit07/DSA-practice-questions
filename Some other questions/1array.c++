// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size){
//      cout<<"printing the array --> "<<endl;
//            for(int i=0;i<size;i++){
//                    cout<<arr[i]<<"  ";
// }
//        cout<<"printing done "<<endl;
// }
// int main(){
//     int number[15];
//     printArray(number , 15);


// //     cout<<"value at 10 is : "<<number[10]<<endl;
// //     // cout<<"value at 20 is : "<<number[20]<<endl;

// // //    initialisation
// //       int SecondArray[3] = {5,7,11};
// //     cout<<"value at 2nd index is : "<<SecondArray[2]<<endl;

//      int third[15] = {2,7};
//     printArray(third , 15);

// // int n= 15;
// // cout<<"printing the array --> "<<endl;
// // for(int i=0;i<n;i++){
// //     cout<<third[i]<<"  ";
// // }


//      int fourth[15] = {0};
//     printArray(fourth , 15);


// // int n= 15;
// // cout<<"printing the array --> "<<endl;
// // for(int i=0;i<n;i++){
// //     cout<<fourth[i]<<"  ";
// // }


// int fifth[15] = {1};
// int n= 15;
// cout<<"printing the array --> "<<endl;
// for(int i=0;i<n;i++){
//     cout<<fifth[i]<<"  ";
// }


// return 0;
// }




#include<iostream>
using namespace std;
     void printArray(int arr[] , int size){
         for (int  i = 0; i < size; i++)
         {
             cout<<arr[i]<<" ";
         }
         cout<<"printing done "<<endl;
         
     }
int main(){

    int first[10] = {10 ,5};
    printArray(first , 10);

    int second[20] = {2 ,7};
    printArray(second , 20);
    
    int secondSize = sizeof(second)/sizeof(int);
    cout<<"thre size of second array is : "<<secondSize;

   



    int third[5] = {5,6,7};
    printArray(third ,5);

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"thre size of third array is : "<<thirdSize;

return 0;
}

 
