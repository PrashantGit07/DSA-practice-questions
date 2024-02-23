 #include<iostream>
 using namespace std;
 void print(int arr[] , int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }

  
 }

void SelectionSort(int arr[] , int n){
  for (int i = 0; i <n-1; i++)  {

       int minIndex =i;
       // ab humne ek loop chala diya jo i ki value ko check karega aur jo bhi minimum value hogi use minindex me daal dega menas humne already i ko minimum maan liya hai
      // ab i ke har ek value ke liye baki bache element ke liye ek loop aur chalana padega

      
       for (int j =i+1; j <n; j++)
       {
         if(arr[j]<arr[minIndex])

           minIndex = j;

       }

       swap(arr[minIndex] , arr[i]);
       
  }
  
}

 int main(){
          int arr[5] = {1,5,4,7,8};
          SelectionSort(arr , 5);
          cout<<"sorted array is : ";
          print(arr  ,5);
 return 0;
 }


