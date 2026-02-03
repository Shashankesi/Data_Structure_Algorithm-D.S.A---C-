#include <iostream>
#include <vector>
#include <algorithm>   // for swap
using namespace std;

class Heap {
    vector<int> vec;

public:
    void push(int val) {
        // Step 1: insert at end
        vec.push_back(val);

        // Step 2: heapify up
        int x = vec.size() - 1;
        int parentI = (x - 1) / 2;

        while (x > 0 && vec[x] > vec[parentI]) {  // to implement min heap just change the sign (>) => (<)
            swap(vec[x], vec[parentI]);
            x = parentI;
            parentI = (x - 1) / 2;
        }
    }

    int top() {
        if (empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return vec[0];
    }

    bool empty() {
        return vec.size() == 0;
    }
};

int main() {
    Heap heap; // max heap and min heap
    heap.push(10);
    heap.push(100);
    heap.push(20);
    heap.push(50);

    cout << "The top element of the heap is: " << heap.top() << endl;
    return 0;
}
