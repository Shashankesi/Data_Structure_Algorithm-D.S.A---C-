#include <iostream>
using namespace std;

int frequency(int arr[], int key) {
    int count = 0;
    for (int i = 0; i < 10; i++) { 
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10];
    int key,count = 0;

    cout<<"Enter the elements of the array: ";
    for (int i=0;i<10;i++) {
        cin>>arr[i];
    }

    cout<<"Enter the key to find the frequency: ";
    cin>>key;

    count = frequency(arr,key);

    cout <<"Frequency of "<<key<<" is d"<<count<<endl;

    return 0;
}
