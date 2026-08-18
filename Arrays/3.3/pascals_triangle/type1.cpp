#include <bits/stdc++.h>
using namespace std;
int NcR(int N, int R){
    long long res=1;
    for (int i = 0; i < R; i++)
    {
        res=res*(N-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int N=5;
    int R=3;
cout<<NcR(N-1,R-1);
    return 0;
}