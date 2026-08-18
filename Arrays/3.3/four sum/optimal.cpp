#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> four_sum(vector<int> &nums,int target){
        int n=nums.size();
         vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            for (int j = i+1; j < n; j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int l=n-1;
                        while(k<l){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
        
                if(sum==target){
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l&&nums[k]==nums[k-1]) k++;
                    while(k<l&&nums[l]==nums[l+1]) l--;
                }
                else if(sum>target) l--;
                else k++;
            }
            }
            
        }
      return ans; 
}
int main(){
 vector <int> nums={1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    vector<vector<int>> ans=four_sum(nums,8);
    for(auto it:ans){
        for(auto x:it){   
        cout<<x<<"  ";}
        cout<<endl;
    }
    return 0;
}