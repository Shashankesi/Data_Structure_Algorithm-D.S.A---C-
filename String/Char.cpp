#include <iostream>
#include <cstring>

using namespace std;

// Convert char array to uppercase
void toUpper(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') {
            word[i] = ch - ('a' - 'A');
        }
    }
}

// Convert char array to lowercase
void toLowerCase(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') {
            word[i] = ch + ('a' - 'A');
        }
    }
}

//to reverse the char array
void charReverse(char word1[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(word1[start], word1[end]);
        start++;
        end--;
    }

}
// to check for palindrome
bool palindrome(char pal[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (pal[start] != pal[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char word[] = "ShasHAnK";

    toUpper(word, strlen(word));
    cout << "FOR UPPER: " << word << endl;

    cout<<endl;

    toLowerCase(word, strlen(word));
    cout << "FOR LOWER: " << word << endl;

    cout<<endl;

    char word1[] = "shashank";
    charReverse(word1, strlen(word1));
    cout<< "CHAR_ARRAY_REVERSED : "<<word1<<endl;

    cout<<endl;

    char pl[] = "racecar";
    if (palindrome(pl, strlen(pl))) {
        cout << pl<<" is a palindrome";
    } else {
        cout << "not a palindrome!..." << endl;
    }
    // to convert the character to ascii  value.....
    // char ch='a';
    // int ascii=int(ch);
    // cout<<"The value of "<<ch<<" is "<<ascii<<endl;

    // to find the index of a given character
    // char ch='g';
    // int position=ch-'a';
    // cout<<"The position of "<<ch<<" is "<<position<<endl;

    // Character array
    // char ch[]={'a','b','c','d','e','f','g'};
    // for(char c:ch){
    //     cout<<c<<endl;
    // }
    // now using character array as a string to print the word not random values
    // cout<<"The string using char array is";
    // char arr[9] = {'s','h','a','s','h','a','n','k','\0'};
    // cout << arr << endl; 

    // take input of character
    // char word[5];
    // cout<<"Input the word ";
    // cin>>word;
    // cout<<"The word given from the user as a input is "<<word<<endl;
    // cout<<"The length of the given word is "<<strlen(word);


    return 0;
}