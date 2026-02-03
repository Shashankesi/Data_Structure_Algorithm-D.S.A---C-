#include<iostream>
#include<vector>
using namespace std;
int diagonalSum(vector<vector<int>> & matrix){
    int n=matrix.size();
    int pSum=0;
    int sSum=0;
    for(int i=0;i<n;i++){
        pSum += matrix[i][i];
        if(i != n-i-1){
            sSum += matrix[i][n-i-1];
        }
    }
    return pSum+ sSum;
}
int main(){

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<"Diagonal Sum: "<<diagonalSum(matrix)<<endl;


    
    // int n;
    // cin>>n;
    // vector<vector<int>> matrix(n, vector<int>(n));
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>matrix[i][j];
    //     }
    // }
return 0;
}