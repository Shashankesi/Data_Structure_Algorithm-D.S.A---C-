#include <iostream>
#include <map>
#include <unordered_map> 
#include <string>
using namespace std;

int main() {
    map<string, int> m;
    m["tv"] = 100;
    m["tv"] = 300;   
    m["laptop"] = 50;
    
    m.emplace("camera", 25);

    cout << "count tv: " << m.count("tv") << endl; 

    if (m.find("laptop") != m.end()) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }

    cout << "\nMap contents (sorted):\n";
    for (auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    unordered_map<string, int> n;
    n["yellow"] = 20;
    n["black"] = 100;
    n["white"] = 50;

    cout << "\nUnordered_map contents (random order):\n";
    for (auto p : n) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
