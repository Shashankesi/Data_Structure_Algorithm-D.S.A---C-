#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

bool validAnagram(string s, string t){
    if(s.size() != t.size()){
        return false;
    }

    unordered_map<char,int> m;

    // count characters of s
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }

    // subtract using t
    for(int i = 0; i < t.size(); i++){
        if(m.count(t[i])){
            m[t[i]]--;
            if(m[t[i]] == 0){
                m.erase(t[i]);
            }
        } else {
            return false;
        }
    }

    return m.empty();
}

int main(){
    string s = "race";
    string t = "care";

    if(validAnagram(s,t)){
        cout << "Valid Anagram" << endl;
    } else {
        cout << "Not Anagram" << endl;
    }

    return 0;
}