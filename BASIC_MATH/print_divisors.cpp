#include <bits/stdc++.h>
using namespace std;
void print_divisors(int N){
    cout<<"the given number is : "<<N<<endl;
    for(int i=1;i<=N;i++){
        if(N%i==0){
          cout<<i<<endl;
        }
    }
}

void print_divisors_opt(int N){
     cout<<"the given number is : "<<N<<endl;
     for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            cout<<i<<endl;
            if(N/i!=i) cout<<N/i<<endl;
            
        }
     }
}

void print_divisors_optSTL(int N){
     cout<<"the given number is : "<<N<<endl;
     vector <int> x;
     for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            x.push_back(i);
            if(N/i!=i) {
                x.push_back(N/i);
            }
        }
     }
    sort(x.begin(),x.end());
    for(auto it:x){
        cout<<it<<" ";
    }
}
int main(){
print_divisors_optSTL(36);
    return 0;
}