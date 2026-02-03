#include <iostream>
#include <string>
using namespace std;

void findPattern(string S, string P) {
    int n = S.length();
    int m = P.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (S[i + j] != P[j])
                break;
        }

        if (j == m)
            cout << "Pattern found at index " << i << endl;
    }
}

int main() {
    string S, P;
    cout << "Enter the main string: ";
    getline(cin, S);
    cout << "Enter the pattern to find: ";
    getline(cin, P);

    findPattern(S, P);
    return 0;
}
