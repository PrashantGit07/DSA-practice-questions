#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cin>>a>>b;
    
    char op;
    cin>>op;
    switch(op){
        case '+':
        cout<<"answer is  :"<<(a+b)<<endl;
        break;

        case '-':
        cout<<"answer is  :"<<(a-b)<<endl;
        break;

        case '*':
        cout<<"answer is  :"<<(a*b)<<endl;
        break;

        case '/':
        cout<<"answer is  :"<<(a+b)<<endl;
        break;
    }

return 0;
}