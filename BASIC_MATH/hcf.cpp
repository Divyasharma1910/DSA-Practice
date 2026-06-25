#include <bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    int hcf=1;
    for (int i =1 ; i < min(a,b); i++)
    {
        if(a%i==0&&b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int gcd(int a ,int b){
    while (a>0&&b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
    
}
int main(){
    cout<<hcf(12,9)<<endl;
    cout<<gcd(13,11);
    return 0;
}