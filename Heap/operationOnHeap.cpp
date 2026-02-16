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

void pop() {
    if (vec.size() == 0) return;

    swap(vec[0], vec[vec.size() - 1]);
    vec.pop_back();
    heapify(0);   // start heapify from root
}

void heapify(int i) {
    if (i >= vec.size()) return;

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int maxI = i;

    if (l < vec.size() && vec[l] > vec[maxI]) {
        maxI = l;
    }

    if (r < vec.size() && vec[r] > vec[maxI]) {
        maxI = r;
    }

    if (maxI != i) {
        swap(vec[i], vec[maxI]);
        heapify(maxI);
    }
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
