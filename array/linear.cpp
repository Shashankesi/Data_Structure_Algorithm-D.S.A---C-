#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={5,1,7,55,44,23,89,45,4,9};
    int key;
    cout<<"Enter the element to serach in the array"<<endl;
    cin>>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"The element is present in the array"<<endl;
    }else{
        cout<<"The element is not present in the array"<<endl;
    }
    return 0;
}