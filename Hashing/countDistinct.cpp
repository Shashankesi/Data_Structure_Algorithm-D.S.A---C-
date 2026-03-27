#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int countDistinct(vector<int> arr){
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }

    for(int el:s){
        cout<<el<<" ";
    }
    cout<<endl;
    cout<< s.size();
}

int main(){
    vector<int> arr={1,2,3,1,2,4,5,6,7,1,2};
    countDistinct(arr);
}