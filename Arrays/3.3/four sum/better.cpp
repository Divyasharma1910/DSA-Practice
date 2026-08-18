#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> four_sum(vector <int>&nums,int target){
    int n=nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j+1; k < n; k++)
            {
                    long long sum =nums[i]+nums[j];
                    sum+=nums[k];
                    int forth=target-(sum);
                    if(hashset.find(forth)!=hashset.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],forth};
                        sort(temp.begin(),temp.end());
                            st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                
            }
            
        }
        
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
    
}
int main(){
    vector <int> nums={1,0,-1,0,-2,2};
    vector<vector<int>> ans=four_sum(nums,0);
    for(auto it:ans){
        for(auto x:it){   
 /*nums → original array                              
ans  → collection of quadruplets
it   → one quadruplet
x    → one number inside that quadruplet */
        cout<<x<<"  ";}
        cout<<endl;
    }

    return 0;
}