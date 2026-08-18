#include <bits/stdc++.h>
using namespace std;
// int NcR(int N, int R){
//     long long res=1;
//     for (int i = 0; i < R; i++)
//     {
//         res=res*(N-i);
//         res=res/(i+1);
//     }
//     return res;
// }
// void brute(int N){
//     for(int i=1;i<=N;i++){
//         cout<<NcR(N-1,i-1)<<"  ";    // here we are computing the function again and again so not a very goo approach .
//     }
// }

vector<int> generateRow(int row){
    
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++) {
        ans=ans*(row-col);
        ans=ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
// brute(5);
// cout<<endl;

 vector<int> ans = generateRow(4);

    for (auto x : ans) {
        cout << x << " ";
    }
    return 0;
}