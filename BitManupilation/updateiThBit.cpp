#include <iostream>
using namespace std;

int updateBit(int n, int i, int val) {
    n = n & ~(1 << i);   
    n = n | (val << i);  
    cout << "Updated number: " << n << endl;
}

int main() {
    int n, i, val;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the position of bit to be changed: ";
    cin >> i;

    cout << "Enter the value (0 or 1) to change the ith bit: ";
    cin >> val;

    updateBit(n, i, val);

    return 0;
}
