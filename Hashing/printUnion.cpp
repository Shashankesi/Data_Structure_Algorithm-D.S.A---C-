#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

    void printUnion(vector<int>arr1, vector<int>arr2){
        unordered_set<int>s;

        for(int el:arr1){
            s.insert(el);
        }
        for(int el:arr2){
            s.insert(el);
        }
        //print union
        for(int el:s){
            cout<<el<<" ";
        }
        cout<<endl;
    }

int main(){
    vector<int> arr1={3,1,2,5,1,8};
    vector<int>arr2={3,1,2,7,19,10};
    printUnion(arr1,arr2);
}