#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    // vec.push_back(5);
    // vec.emplace_back(6);
    // cout<<"The size of the vector is:"<<vec.size();
    // cout<<endl;
    // cout<<"The capacity of the vector is:"<<vec.capacity();
    // cout<<endl;
    // for(int val:vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    
//     vector<int>:: iterator it;// for forward print
//     for(it=vec.begin();it != vec.end(); it++){
//         cout<<*(it)<<endl;
//     }
// cout<<endl<<"Now in backward"<<endl;
//     for(auto it= vec.rbegin(); it != vec.rend(); it++){// for backward print 
//         cout<<*(it)<<endl;
//     }

// Reverse
// reverse(vec.begin(), vec.end());

// for(auto val:vec){
//     cout<<val<<endl;
// }
string s="abc";
next_permutation(s.begin(), s.end());

cout<< s<< endl;
prev_permutation(s.begin(), s.end());
cout<< s<< endl;
    return 0;
}