// #include<iostream>
// #include<vector>

// using namespace std;
 
// vector<int> reverse(vector<int> v){
//     int s=0;
//     int e = v.size()-1;
//     while(s<=e){
//         swap(v[s] , v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void Print(vector<int> v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v ;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
     
//     vector<int> ans = reverse(v);
//     cout<<"Printig reversed array : ";
//     Print(ans);

// return 0;
// }






// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> Reverse(vector<int> arr){
//     int s=0; int e = arr.size()-1;
//     while(s<=e){
//         swap(arr[s] , arr[e]);
//         s++;
//         e--;
//     }
//     return arr;
// }

// void Print(vector<int> arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> arr;
//     arr.push_back(10);
//     arr.push_back(5);
//     arr.push_back(70);
//     arr.push_back(18);
//     arr.push_back(12);
//     arr.push_back(9);
//     arr.push_back(0);

//     vector<int> Answer = Reverse(arr);
//     cout<<"the reversed array is  :";
//     Print(Answer);
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
vector<int> Reverse(vector<int> r){
    for (int i = 0; i < r.size()-1; i++)
    {
        int s=2; // means index 2 ke baad reverse hoga
        int e = r.size()-1;
        while(s<=e){
            swap(r[s] , r[e]);
            s++;
            e--;

        }
    }
    return r;
    
}
void Print(vector<int> r){
    for (int i = 0; i < r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> r;
    r.push_back(20);
    r.push_back(5);
    r.push_back(40);
    r.push_back(4);
    r.push_back(100);
    r.push_back(9);

    vector<int> FinalAnswer = Reverse(r);
    cout<<"reversed array is : ";
    Print(FinalAnswer);

return 0;
}
