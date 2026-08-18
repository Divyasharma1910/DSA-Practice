#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> four_sum(vector <int>&nums,int target){
    int n=nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    long long sum =nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                            st.insert(temp);
                    }
                }
                
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