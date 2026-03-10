#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string,int>m;
    m["India"]=100;
    m["US"]=40;
    m["China"]=20;
    m["Nepal"]=100;

    cout<<"Before update:-";
    for(pair<string,int> country:m){
        cout<<country.first<<","<<country.second<<endl;
    }
    // update india value
    m["India"]=200;
    cout<<"After Update:-";
    for(pair<string,int> country:m){
        cout<<country.first<<","<<country.second<<endl;
    }

    // to check if us exists or not
    if(m.count("US")){
        cout<<"US exists\n";
    }else{
        cout<<"US not exists\n";
    }


    m.erase("US");
     cout<<"After deleting US:-\n";
    for(pair<string,int> country:m){
        cout<<country.first<<","<<country.second<<endl;
    }
}