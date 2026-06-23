#include <iostream>
using namespace std;
int countDigits(int n) 
{
    int count =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
    }
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"the number of digits in the number "<<n<<"are : "<<countDigits(n)<<endl;
    return 0;
}
// TC: O(log10(N))