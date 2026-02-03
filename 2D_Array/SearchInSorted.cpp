// searching for the element in the sorted 2_D matrix
#include<iostream>
#include<vector>
using namespace std;
// finding the number by directly comparing
int search(vector<vector<int>> &matrix){
    int n= matrix.size();
    int countOf9=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]== 9){
                cout<<"the value of i is:"<<i<<endl<<"the value of j is:"<<j<<endl;
                countOf9++;
            }
        }
    }
    return countOf9;
}
// finding the value but by taking that number as a input and then compare and find
int searchUsingTarget(vector<vector<int>> &matrix, int target){
    int n = matrix.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<matrix[i].size(); j++){
            if(matrix[i][j] == target){
                count++;
            }
        }
    }
    return count;
}

int main(){

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {9, 8, 9}
    };
     int target;
    cout << "Give the element to search in the 2D matrix: ";
    cin >> target;
    cout << "The count of " << target << " is: " << searchUsingTarget(matrix, target) << endl;
   cout<<"The count of 9 is :"<< search(matrix)<<endl;
   return 0;
}