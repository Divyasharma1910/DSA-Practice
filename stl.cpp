#include <bits/stdc++.h>
using namespace std;
void explain_pair(){
    pair<int,int> p={1,3};
    cout<<p.first<<p.second<<endl;
    pair<int,pair<int,int>> s={1,{2,3}};
    cout<<s.first<<s.second.second<<endl;
    pair <int,int> arr[]={{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[0].second<<endl;
   // cout<<arr[1];  C++ does not know how to print an entire pair directly using cout
}

void explain_vector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);//it directly constructs the pair in place without creating a temporary object, which can be more efficient than push_back when adding pairs to the vector.
vector <int> v1(5,100);//it creates a vector of size 5, where each element is initialized to 100.
vector<int> v2(5);// vector of size 5, with default values (0 for int)
vector<int> v3(5,10);// vector of size 5, with all elements initialized to 10
vector <int>  v4(v1);//copy
// if we predefine the size of vector we can still increase the size later, it is dynamic
cout<<v[0]<<endl;
vector <int> ::iterator it=v2.begin();
it++;
cout<<*(it)<<endl;
vector<int> ::iterator it=v1.end();//end point to the memory location just after the last element of the vector, so we need to decrement it to access the last element
cout<<v[0]<<" "<<v.at(0)<<endl;
} 
for(vector<int> ::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it)<<endl;
}
for(auto it=v.begin();it!=v.end();it++){ // auto keyword allows the compiler to automatically deduce the type of the iterator, making the code more concise and easier to read.
    cout<<*(it)<<endl;
}
for(auto it:v){ // range-based for loop, it iterates over each element in the vector v, assigning the current element to the variable it in each iteration. This is a more concise and readable way to iterate through the elements of a container like a vector.
    cout<<it<<endl;
}
    v.erase(v.begin()+1);
//{10,20,30,40,50}
v.erase(v.begin()+2,v.begin()+4);   //{10,20,50}


vector <int> v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100}
v.insert(v.begin()+1,2,10);//{300,10,10,100,100} 
vector<int> copy(2,50)
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
 cout<<v.size();
 //{10,20,30}
 v.pop_back();//take out {10}
 //v1-->{10,20}
 //v2-->{30,40}
 v1.swap(v2); //v1-->{30,40}  v2-->{10,20}
}
int main(){
//explain_pair();
explain_vector();
    return 0;
}