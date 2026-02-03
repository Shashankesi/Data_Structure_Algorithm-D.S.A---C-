/*
2:-Print reverse of a string using recursion 
3:-implement program to find factorial of an element 
*/
#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index < 0)
        return;
    cout << str[index];
    reverseString(str, index - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    reverseString(str, str.length() - 1);
    cout << endl;
    return 0;
}
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num < 0)
//         cout << "Factorial is not defined for negative numbers." << endl;
//     else
//         cout << "Factorial of " << num << " is: " << factorial(num) << endl;

//     return 0;
// }
