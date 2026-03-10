//build hashing with the help of unorder map but stored in unordered order
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["china"]=150;
    m["India"]=150;
    m["Nepal"]=50;
    m["US"]=20;

    for(pair<string,int>country :m){
        cout<<country.first<<","<<country.second<<endl;
    }

    // to check whether the provide key exists or not using count function
    if(m.count("Nepal")){
        cout<<"exists\n";
    }else{
        cout<<"doesn't exists"<<endl;
    }
    return 0;
}