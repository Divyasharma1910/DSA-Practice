#include <bits/stdc++.h>
using namespace std;
vector<int> Majority_element(vector<int> arr){
vector <int> ls;
int n=arr.size();
for (int i = 0; i < n; i++)
{
    if(ls.size()==0||arr[i]!=ls[0]){
       int cnt=0;
       for (int  j = 0; j < n; j++)
       {
        if(arr[j]==arr[i])
        cnt++;
       }
       if(cnt>n/3) ls.push_back(arr[i]);
       
        
    }
    if(ls.size()==2) break;
}
return ls;
}
int main(){
vector <int> arr={2,1,1,3,1,4,5,6};
vector <int> ans=Majority_element(arr);
for(auto it:ans){
    cout<< it<< "  ";
}
    return 0;
}