#include <bits/stdc++.h>
using namespace std;
bool is_amstrong(int n){
    cout<<"orignal number "<<n<<endl;
    int sum=0;
     int duplicate=n;
    while(n>0){
       
        int ld=n%10;
        n=n/10;
        sum=sum+(ld*ld*ld);
    }
    return sum==duplicate;
}
int main(){
    cout<<is_amstrong(372);
    return 0;
}