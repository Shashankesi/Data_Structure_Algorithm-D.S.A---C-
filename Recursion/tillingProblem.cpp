#include<iostream>
using namespace std;

int tillingProblem(int n){
    if(n==0 || n==1) return 1;
    // for the vertical selection
    int ans1=tillingProblem(n-1);

    // for the horizontally selection

    int ans2= tillingProblem(n-2);

    return ans1+ ans2;
}

int main(){

    cout<<"The tile used to fill the floor: "<<tillingProblem(5);

}