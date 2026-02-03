#include<iostream>
using namespace std;

int setIthBit(int num, int i){
    int mask=1<<i;
    return mask | num;
}
int main(){
    cout<<setIthBit(7,3);
    cout<<endl;
    cout<<setIthBit(6,2);
}