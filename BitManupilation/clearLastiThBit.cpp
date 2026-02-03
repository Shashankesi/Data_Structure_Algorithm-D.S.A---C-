#include<iostream>
using namespace std;

void clearLastiThBit(int n, int i){
    int bitMask=~0<<i;
    n=n&bitMask;
    cout<<n<<endl;
}

int main(){
    clearLastiThBit(15,2);
    return 0;
}