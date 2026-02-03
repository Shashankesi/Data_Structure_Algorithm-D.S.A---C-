#include<iostream>
using namespace std;
int main(){
    string s= "Shashank";
    int len= s.size();

    s[len-3]='z';
    cout<<s[len-2];
    cout<< endl;
    cout<<s;
}