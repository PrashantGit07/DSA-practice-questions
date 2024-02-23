// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
    
    
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch = 'A'+ row - 1;
//             cout<<ch <<" ";
            
            
        
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
    
    
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch = 'A'+ col-1 ;
//             cout<<ch <<" ";
            
            
        
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    
    
    while(row<=n){
        int col=1;
        while(col<=n){
             char start = 'A'+1;
            cout<<start <<" ";
            
            start = start+1;
        
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
return 0;
}