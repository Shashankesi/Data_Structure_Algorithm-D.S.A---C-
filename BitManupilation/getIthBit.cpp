#include<iostream>
using namespace std;

int ithBit(int num, int i){
    int bitMask=1<<i;
    if(num & bitMask){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    cout<<"The value at the given position is:"<<ithBit(6,2);
}