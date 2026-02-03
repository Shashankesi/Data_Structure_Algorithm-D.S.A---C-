#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number";
  cin>>n;
  int count=0;
  if(n<=1){
    cout<<"Not a prime number!...";
  }
  else{
    for(int i=1;i<=n;i++){
      if(n%i==0)
      count++;
    }
  }
  if(count>=2){
    cout<<"Not a prime number!...";
  }
  else{
    cout<<"It's a prime number!...";
  }

  return 0;
}