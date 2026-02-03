#include <iostream>
#include <queue>
using namespace std;

void interLeave(queue<int> &org) {
    if (org.size() % 2 != 0) {
        cout << "Queue size must be even to interleave properly.\n";
        return;
    }

    queue<int> first;
    int n = org.size();

    // Step 1: Move first half into a separate queue
    for (int i = 0; i < n / 2; i++) {
        first.push(org.front());
        org.pop();
    }

    // Step 2: Interleave both halves
    while (!first.empty()) {
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main() {
    queue<int> org;

    // push 10 elements (even number)
    for (int i = 1; i <= 10; i++) {
        org.push(i);
    }

    interLeave(org);

    cout << "After interleaving: ";
    while (!org.empty()) {
        cout << org.front() << " ";
        org.pop();
    }
    cout << endl;

    return 0;
}
