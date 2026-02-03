#include<bits/stdc++.h>
using namespace std;

int getmax(int num[], int n){ // getting the maximum value from the array that is given
    int maxvalue= INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>maxvalue){
            maxvalue=num[i];
        }
    }
    return maxvalue;
}

int getmin(int num[], int n){
    int minvalue= INT_MAX;
    for(int i=0; i<n;i++){
        if(num[i]<minvalue){
            minvalue= num[i];
        }
    }
    return minvalue;
}
int main(){
    int size;
     cout<<"Enter the size of the array"<<endl;
    cin>> size;
   

    int num[100];
     cout<<"Enter the value of the array as given the size of array:-"<<endl;
    for(int i=0; i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is :"<<getmax(num, size)<<endl;
    cout<<"Minimum value is :"<<getmin(num, size)<<endl;
}