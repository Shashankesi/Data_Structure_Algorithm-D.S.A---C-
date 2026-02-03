#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

// using recursion
int gcdRec(int a, int b){
    if(b==0) return a;
    return gcdRec(b,a%b);
}

// LCM
int lcm(int a, int b){
    int gcd= gcdRec(a,b);
    return (a*b)/gcd;
}
int main(){
    cout<<"The LCM of a&b is "<<lcm(20,28)<<endl;
    return 0;
}