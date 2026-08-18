#include <bits/stdc++.h>
using namespace std;
vector<int> Majority_element(vector<int> arr){
    vector<int> ls;
    map<int,int> mpp;
    int n=arr.size();
      int mm=(int)n/3+1;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
if(mpp[arr[i]]==mm){
    ls.push_back(arr[i]);
}
        
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