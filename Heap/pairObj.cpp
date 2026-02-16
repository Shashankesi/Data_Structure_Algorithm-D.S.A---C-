#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    bool operator<(const Student &Obj) const {
        return this->marks < Obj.marks;  // compare marks
    }
};

int main() {
    priority_queue<pair<string, int>> pq;

    pq.push(make_pair("Shashank", 29));
    pq.push(make_pair("Aash", 99));
    pq.push(make_pair("Aman", 89));

    while (!pq.empty()) {
        cout << "top = "
             << pq.top().first << ", "
             << pq.top().second << endl;

        pq.pop();   // fixed semicolon
    }
}
