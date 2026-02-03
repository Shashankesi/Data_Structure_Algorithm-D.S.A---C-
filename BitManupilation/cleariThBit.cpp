#include<iostream>
using namespace std;

int clearIthBit(int n, int i){
    int mask = ~(1<<i);
    return n & mask;
}
int main(){
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the position of bit to be cleared: ";
    cin>>i;
    cout<<"The new number after clearing the ith bit is: "<<clearIthBit(n, i)<<endl;
    return 0;
}