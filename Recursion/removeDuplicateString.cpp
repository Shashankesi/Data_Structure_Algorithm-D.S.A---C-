//appnna college --> apnacoleg
#include <iostream>
#include <string>
using namespace std;

void removeDuplicateInString(string str, string ans, int i, int map[26]) {
    if (i == str.size()) {
        cout << "ans: " << ans << endl;
        return;
    }

    int mapIdx = str[i] - 'a';

    if (map[mapIdx] == true) { // for duplicate found already true in the map value 
        removeDuplicateInString(str, ans, i + 1, map);
    } else { // for no duplicate in the given string from the value of map
        map[mapIdx] = true;
        removeDuplicateInString(str, ans + str[i], i + 1, map);
    }
}

int main() {
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {0}; 
    removeDuplicateInString(str, ans, 0, map);
    return 0;
}
