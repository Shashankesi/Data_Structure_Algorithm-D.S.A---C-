#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> &matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();

    int i = 0, j = m - 1;  // start from top-right corner

    while(i < n && j >= 0){
        if(matrix[i][j] == target){
            cout << "Found at cell (" << i << "," << j << ")" << endl;
            return true;
        } 
        else if(matrix[i][j] > target){
            j--;  // move left
        } 
        else {
            i++;  // move down
        }
    }
    cout << "Key not found" << endl;
    return false;
}
// bool searchFromTopLeft(vector<vector<int>> &matrix, int key){
//     int n = matrix.size();
//     int m = matrix[0].size();

//     int i = 0, j = 0;
//     while(i < n && j < m){
//         if(matrix[i][j] == key){
//             cout << "Found at cell (" << i << "," << j << ")" << endl;
//             return true;
//         }
//         // Always move right if possible, else move down
//         if(j+1 < m) j++;
//         else i++;
//     }
//     cout << "Key not found" << endl;
//     return false;
// }


int main(){
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},   
        {15, 26, 37, 45},   
        {27, 29, 37, 48},
        {32, 33, 39, 50}    
    };

    int target;
    cout << "Give the element to search in the 2D matrix: ";
    cin >> target;
    // int key;
    // cout << "Give the element to search in the 2D matrix: ";
    // cin >> key;

    search(matrix, target);
    // searchFromTopLeft(matrix,key);
    return 0;
}
