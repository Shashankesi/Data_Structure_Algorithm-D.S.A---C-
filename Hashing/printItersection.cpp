#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

    void printIntersection(vector<int>arr1,vector<int>arr2){
        unordered_set<int>s;
        for(int el:arr1){
            s.insert(el);
        }

        for(int el:arr2){
            if(s.find(el)!=s.end()){
                cout<<el<<" ";
            }
        }
        cout<<endl;
    }



int main(){
    vector<int> arr1={3,1,2,5,1,8};
    vector<int>arr2={3,1,2,7,19,10};
    printIntersection(arr1,arr2);
}