#include <iostream> 
using namespace std;

int main() {
    int sum = 0;  // Initialize sum
    int size;
    cin >> size;
    
    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }
    
    cout << "Sum of array elements = " << sum << endl;

    return 0; 
}
