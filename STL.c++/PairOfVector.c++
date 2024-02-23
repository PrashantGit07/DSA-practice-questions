#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int, int>> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
    }
    cout<<endl;
}    
int main(){
  vector<pair<int , int>> v;
//   pair of vector me har ek element ek pair hota hain.... means (1,2).. ye ek element hoga 
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    int x , y;
    cin>>x>>y;
    v.push_back({x,y});
   }
   
   printVec(v);

}