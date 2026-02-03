#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void printSubset(vector<int> &arr, vector<int> &ans, int i){
    if(i==arr.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    //include
    ans.emplace_back(arr[i]);
    printSubset(arr,ans,i+1);

    //exclude

    ans.pop_back();// backtracking
    printSubset(arr,ans,i+1);
}

int main(){
    vector<int> arr={1,2,3};
    vector<int> ans=ans; //store subset
    printSubset(arr,ans,0);
    return 0;
}