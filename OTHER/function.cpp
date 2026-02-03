#include <iostream>
using namespace std;

void passByValue(int x) {
    x = x + 10;  
}
void passByReference(int &y) {
    y = y + 10;  
}

int main() {
    int num = 5;
    //PassByValue
    cout<<"calling passByValue function"<<endl;
    cout << "Before function call: " << num << endl;
    passByValue(num);
    cout << "After function call: " << num << endl; 
    //PassByReference
    cout<<"calling passByRefrence function"<<endl;
    cout << "Before function call: " << num << endl;
    passByReference(num);
    cout << "After function call: " << num << endl; 
    return 0;
}
