// #include<iostream>
// using namespace std;
// int getMin(int num[] , int n){

//     int min = INT8_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//     return min;
    
// }


// int getMax(int num[] , int n){

//     int max = INT8_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(num[i]>max){
//             max = num[i];
//         }
//     }
//     return max;
    
// }

// int main(){

//     int size;
//     cin>>size;

//     // int num[size];  ---> this is bad practice , we just need to give integer size of array not variable 

//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>num[i];
//     }
//     cout<<"maximum value is : "<<getMax(num , size)<<endl;
//     cout<<"mainimum value is : "<<getMin(num , size)<<endl;
    

// return 0;
// }


// using pre defined functions to find maximum and minimum

#include<iostream>
using namespace std;
int getMin(int num[] , int n){

    int mini = INT8_MAX;
    for(int i = 0; i < n; i++)
    {
        mini = min(mini , num[i]);
    }
    
    return mini;
    
}


int getMax(int num[] , int n){

    int maxi = INT8_MIN;
    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi , num[i]);
    }
    return maxi;
    
}

int main(){

    int size;
    cin>>size;

    // int num[size];  ---> this is bad practice , we just need to give integer size of array not variable 

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"maximum value is : "<<getMax(num , size)<<endl;
    cout<<"mainimum value is : "<<getMin(num , size)<<endl;
    

return 0;
}




































