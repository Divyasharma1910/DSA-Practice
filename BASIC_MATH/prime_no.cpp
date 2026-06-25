#include <bits/stdc++.h>
using namespace std;
void check_prime(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
if(n%i==0){
    count++;
    if(n/i!=i){
        count++;
    }
}    
}
if(count==2){
        cout<<"yes the number is prime "<<endl;
    }
    else cout<<"not prime";
    }
int main(){
check_prime(4);
    return 0;
}