#include<iostream>
using namespace std;

void printNumInDec(int n){
    if(n == 0) return;
    cout << n << " ";
    printNumInDec(n-1);
}

int main(){
    int n = 5;
    cout << "The numbers in decreasing order are: ";
    printNumInDec(n);
    cout << endl;
    return 0;
}
