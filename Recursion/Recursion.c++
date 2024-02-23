 #include<iostream>
 using namespace std;
 //recuroion wala function
 void solve(int n){
      //base case
      if(n==0)
      return;

      cout<<n<<" ";
      //recurive call
      solve(n-1);
    //   solve(n+1);
 }
 int main(){
    int n;
    cin>>n;
    cout<<"print the decreasing order "<<endl;
    //function call
    solve(n);
 return 0;
}