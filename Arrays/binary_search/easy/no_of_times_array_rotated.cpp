#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low =0;
        int high=n-1;
        int ans=INT_MAX;
        int index=-1;
        while(low<=high){
            int mid=(low+high)/2;

            if(nums[low]<=nums[high]){
                if(nums[low]<ans){
                    ans=nums[low];
                    index=low;
                }
                break;
            }
            if(nums[low]<=nums[mid]){    //left half is sorted
                 if(nums[low]<ans){
                    ans=nums[low];
                    index=low;
                }
                low=mid+1;
            }
            else                         //right half is sorted 
             high=mid-1;
             if(nums[mid]<ans){
                    ans=nums[mid];
                    index=mid;
                }
           
            

        }
        return index ;
    }
};