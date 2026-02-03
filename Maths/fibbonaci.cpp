#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;


    if(n <= 0) {
        cout << "Can't find Fibonacci for non-positive numbers.";
        return 0;
    }

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1;  

        if (i != n) cout << ", ";  

        nextTerm = t1 + t2;  
        t1 = t2;
        t2 = nextTerm;
    }
    
    return 0;
}
