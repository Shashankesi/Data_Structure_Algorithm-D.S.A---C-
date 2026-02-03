#include <iostream>
using namespace std;

void findPairs(int target) {
    cout << "Pairs of digits whose sum is " << target << ":" << endl;

    for (int i = 0; i <= 9; i++) {
        int j = target - i; 
        if (j >= 0 && j <= 9) { 
            cout << i << " + " << j << " = " << target << endl;
        }
    }
}

int main() {
    int target = 10;
    findPairs(target);
    return 0;
}
