#include<iostream>
using namespace std;

bool powerOf2(int n) {
    if (n <= 0) return false;  
    return (n & (n - 1)) == 0;  
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (powerOf2(n))
        cout << n << " is a power of 2." << endl;
    else
        cout << n << " is NOT a power of 2." << endl;

    return 0;
}
