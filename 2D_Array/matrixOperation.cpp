// Some matrix operation 
#include<iostream>
using namespace std;

// print the hexadecimal value of a given row
// so matrix pointer store the address for row by row
// void func(int matrix[][4], int n, int m){
//     cout<<"0th row address"<<matrix<<endl;
//     cout<<"1th row address"<<matrix+1<<endl;
//     cout<<"2th row address"<<matrix+2<<endl;
//     cout<<"3th row address"<<matrix+3<<endl;
//     cout<<endl;
// }

// // now for the value address
// void func2(int matrix[][4], int n, int m){
//     cout<<"0th row value address"<<*matrix<<endl;
//     cout<<"1th row  value address"<<*matrix+1<<endl;
//     cout<<"2th  row value address"<<*matrix+2<<endl;
//     cout<<"3th  row value address"<<*matrix+3<<endl;
// }
// now to print any row value and perform operation like sum and product
int printRow(int matrix[][4], int n, int m){
    int sum=0;
    int product=1;
    for(int j=0;j<m;j++){
        sum += matrix[1][j];
        product *= matrix[1][j];
    }
    cout<<"The sum of the row 1 is:"<<sum<<endl;
    cout<<"The product of row 1 is:"<<product<<endl;
}
int main(){
       int matrix[4][4] = {
        {1, 2, 3, 4},   
        {5, 6, 7, 8},   
        {9, 10, 11, 12},
        {13, 14, 15, 16}    
    };
    // func(matrix,4,4);
    // func2(matrix,4,4);
    printRow(matrix,4,4);
}
