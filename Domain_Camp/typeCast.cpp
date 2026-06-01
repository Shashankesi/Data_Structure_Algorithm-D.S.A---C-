#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    float f = 3.14;
    int i = static_cast<int>(f);

    cout << "Value of i = " << i << endl;
    cout << "Type of i = " << typeid(i).name() << endl;

    return 0;
}