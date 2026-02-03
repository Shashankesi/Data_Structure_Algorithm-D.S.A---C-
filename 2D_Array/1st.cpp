#include<iostream>
using namespace std;


void search(int student[][3]){
    int n=3, m=3;
    int countOf63= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(student[i][j]==63){
                countOf63++;
            }
        }
    }
    cout<<"count of 63 is:"<<countOf63<<endl;
}
int main(){
    // for normal intializing of 2d array
    int student[3][3]={{100,100,100},
                        {85,74,89},
                        {63,72,65}};
    search(student);

    // int marks[3][4];
    // // for taking inout from terminal

    // int n=3, m=4;
    // cout<<"Input the element for the 2_D array"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>marks[i][j];
    //     }
    // }

    // cout<<"The element's present in the 2_D array is:"<<endl;

    // // for output print using loop
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<marks[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}