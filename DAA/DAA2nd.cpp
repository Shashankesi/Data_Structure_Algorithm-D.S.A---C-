/*
Develop  a program for implementation of power function and determine that complexity should be 
O(logn) public class power function{
1:- Method to create calculate x^n in O(logn) time using recursion
public static doubt.power(double x, int n) }
2:- Base Case:-X^0=1
if (n==0), then return -1
3:- Handle negative exponents if(n<0)
4:-Recursive step for even and odd
5:- Test case example
*/
#include<iostream>
using namespace std;

double Power(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n>0){
        return x*Power(x, n-1);
    }
    else{
        return Power(x,n+1)/x;
    }
}
int main(){
    cout<<"The power of 2^10 is:-"<< Power(2,10)<<endl;
    return 0;
}