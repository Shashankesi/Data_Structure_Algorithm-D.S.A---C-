//sum of n natural number
#include<iostream>
using namespace std;


int sumOfNnumber(int n){
    if(n == 0) return 0;
    
    return n + sumOfNnumber(n-1);
}
int main(){
    int ans=sumOfNnumber(5);
    cout<<"The sum of n number is :"<<ans<<endl;
}