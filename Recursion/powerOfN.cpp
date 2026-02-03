#include<iostream>
#include<vector>
using namespace std;

int pow(int x, int n){
    if(n==0) return 1; // base case
    int halfPow=pow(x, n/2);
    int halfPowSquare= halfPow * halfPow;

    if(n % 2!=0 ) return x* halfPowSquare;

    return halfPowSquare;
}

int main(){
    int x=2, n=10;
cout<<"The power of "<<x<< " to the "<<n<<" is "<<pow(x,n);

}