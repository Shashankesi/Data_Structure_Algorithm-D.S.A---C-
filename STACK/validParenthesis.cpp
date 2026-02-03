#include <iostream>
#include <stack>
#include <string>
using namespace std;


    bool isValid(string s) {
        if (s.length() % 2 != 0) return false;
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') st.push(ch);
            else {
                if (st.empty()) return false;
                char top = st.top();
                if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']')) st.pop();
                else return false;
            }
        }
        return st.empty();
    }


int main() {
    string str1="{([])}";
    cout<<endl;
    string str2="{([)}";

    cout<< isValid(str1);//1 true
    cout<<endl;
    cout<<isValid(str2);//0 false
    
return 0;
}
