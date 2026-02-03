#include <iostream>
#include <vector>
using namespace std;

// Print numbers from n to 1
void printNums(int n) {
    if (n == 1) {
        cout << "1\n";
        return;
    }
    cout << n << " ";
    printNums(n - 1);
}

// Factorial using recursion
int nFact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * nFact(n - 1);
}

// Sum of first n numbers
int nSum(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return n + nSum(n - 1);
}

// Fibonacci using recursion
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Check if number is a power of three
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;          
        while (n % 3 == 0) n /= 3;         
        return n == 1;                     
    }
};

// Check if array is sorted
bool isSorted(const vector<int> &arr, int n) {
    if (n == 0 || n == 1) {
        return true;
    }
    return arr[n - 1] > arr[n - 2] && isSorted(arr, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Numbers from 4 to 1: ";
    printNums(4);

    cout << "The factorial of 1 is " << nFact(1) << endl;
    cout << "The sum of first 4 numbers is " << nSum(4) << endl;
    cout << "The 4th Fibonacci number is " << fibonacci(4) << endl;

    Solution sol;
    cout << boolalpha << "Is 27 a power of three? " << sol.isPowerOfThree(27) << endl;

    cout << "Is the array sorted? " << isSorted(arr, arr.size()) << endl;

    return 0;
}
