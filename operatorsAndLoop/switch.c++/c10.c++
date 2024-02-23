#include<iostream>
using namespace std;
int main(){
    int p , c ,b , m;
    cout<<"nter the marks of four subject : ";
    cin>>p;
    cin>>c;
    cin>>b;
    cin>>m;
    int per;
    per = ((p+c+b+m)*100)/500;
    cout<<per<<endl;

    switch (per>=90 && per<100)
    {
    case 1:
        cout<<"Grade A";
        break;
    switch (per>=80 && per<90)
    {
    case 1:
        cout<<"Grade is B"<<endl;
        break;
    switch (per>=70 && per<80)
    {
    case 1:
        cout<<"grade is C"<<endl;
        break;
    
    default:
        break;
    }
    
    default:
        break;
    }
    
    default:
        break;
    }
return 0;
}