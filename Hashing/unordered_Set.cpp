#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);

    cout<<"The size of the set is:"<<s.size()<<endl;

    if(s.find(2)!=s.end()){
        cout<<"2 is present"<<endl;
    }else{
        cout<<"It doesn't exists"<<endl;
    }

    // to print
    for(auto m:s){
        cout<<m<<" "<<endl;
    }
}

