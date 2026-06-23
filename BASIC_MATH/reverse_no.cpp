#include <bits/stdc++.h>
using namespace std;
int reverse(int x){
    cout<<"orignal number is : "<<x<<endl;
    int rev=0;
    if(x<0) {x=abs(x);}
    while(x>0){
        int lastdig=x%10;
        x=x/10;
        rev=rev*10+lastdig;
    }
    return rev;
}
int main(){
cout<<"reversed number is "<<reverse(-1000);
    return 0;
}