#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    // ==========================
    // Hash Map Example
    // ==========================
    unordered_map<int, string> students;

    students[101] = "Shashank";
    students[102] = "Rahul";
    students[103] = "Priya";

    cout << "----- Hash Map Example -----" << endl;
    for (auto pair : students) {
        cout << "ID: " << pair.first
             << ", Name: " << pair.second << endl;
    }

    // ==========================
    // Hash Table Example
    // ==========================
    unordered_map<int, string> employees;

    employees[1] = "Aman";
    employees[2] = "Neha";
    employees[3] = "Rohit";

    cout << "\n----- Hash Table Example -----" << endl;
    for (auto pair : employees) {
        cout << "ID: " << pair.first
             << ", Name: " << pair.second << endl;
    }

    // ==========================
    // Hash Set Example
    // ==========================
    unordered_set<string> courses;

    courses.insert("Java");
    courses.insert("Python");
    courses.insert("C++");
    courses.insert("Java"); // Duplicate, ignored

    cout << "\n----- Hash Set Example -----" << endl;
    for (auto course : courses) {
        cout << course << endl;
    }

    cout << "\nTotal Unique Courses: "
         << courses.size() << endl;

    return 0;
}