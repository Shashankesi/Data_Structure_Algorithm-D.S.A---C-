#include <iostream>
using namespace std;

void printNum(int n){
    if(n == 0){
        return;
    }
    cout << "The number is: " << n << endl;
    printNum(n - 1);
}

int main(){
    printNum(9); 
    return 0;
}
