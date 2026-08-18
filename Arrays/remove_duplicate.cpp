//remove duplicate in pace from sorted array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,1,1,2,2,3,3,4};
    set <int> st;
    for (int i = 0; i <8;i++)
    {
        st.insert(arr[i]);
    }
   int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    cout<<index;


    return 0;
}
