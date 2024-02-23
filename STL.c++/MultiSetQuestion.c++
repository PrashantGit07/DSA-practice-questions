#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; //bags
        int k;  //k minutes tak candies khani hai
        cin>>n>>k;
       multiset<long long > bags;      //har ek bag me kitni candy hai
        //saari candies input le lenge
        for (int i = 0; i <n; i++)
        {
            long long candy_ct;
            cin>>candy_ct;
            //candy ko inpute le liya
            bags.insert(candy_ct); ///bags me candies ko daaal dia
        }
        //k times candies niaklni hai kyki gar ek minute ek candie nikalni hai
        long long total_cand =0;
        for (int i = 0; i < k; i++)
        {
             //har ek loop me ek candy nikalni hai jiska amout maximum hai
             auto last_it = bags.end();    //maximum candy last me hogi
             last_it--;
             int candy_ct;
             // ab maximu candy count is iterator ki maximum value hogi
             candy_ct = *last_it;
             total_cand += candy_ct;
             bags.erase(last_it);
             bags.insert(candy_ct/2);
        }
        cout<<total_cand<<endl;
        
        
    }
return 0;
}