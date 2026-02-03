#include <iostream>
using namespace std;

int fastExpo(int base, int power) {
    int ans = 1;
    while (power > 0) {
        int lastBit = power & 1;       
        if (lastBit == 1) {
            ans *= base;            
        }
        base = base * base;         
        power = power >> 1;            
    }
    return ans;
}

int main() {
    cout<<fastExpo(3,2) << endl; 
    cout<<fastExpo(2,10) << endl; 
    return 0;
}
