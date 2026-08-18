//you are given with a array containing positive and negative numbers and you have to store them in alternate fashion mantaining the order.
// arr[]={-1,2,3,4,-3,1}
// pos[]={2,3,4,1}
// neg[]={-1,-3}
#include<bits/stdc++.h>
using namespace std;
vector <int> rearrangeArray(vector <int> &nums){
    vector<int> pos,neg;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else neg.push_back(nums[i]);
    }

vector <int> ans(nums.size());

    if(pos.size()>neg.size()){
        for (int i = 0; i < neg.size(); i++)
        { 
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    int index=2*neg.size();
    for (int i = neg.size(); i < pos.size(); i++)
    {
        ans[index]=pos[i];
        index++;
    }
}
    else{
for (int i = 0; i < pos.size(); i++)
        { 
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    int index=2*pos.size();
    for (int i = pos.size(); i < neg.size(); i++)
    {
        ans[index]=neg[i];
        index++;
    } 
    return ans;
}
}
int main(){
vector<int>nums={2,-3,4,5,6,8,-7,-1};
vector <int> ans=rearrangeArray(nums);
for(auto it:ans) cout<<it<<"  ";
    return 0;
}