#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int> vec, int i, int target ){
    if(vec[i]==vec.size()){
        return -1;
    }
    if(vec[i]==target){
        return i;
    }
    
    return firstOccur(vec, i+1, target);
}

int main(){
    vector<int> vec={1,2,3,3,3,4};
    cout<<"The first occurence of number at the position: "<<firstOccur(vec,0,3)<<endl;

}
