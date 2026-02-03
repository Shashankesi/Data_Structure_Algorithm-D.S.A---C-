#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    /*
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
        */
       // ABCD
       /*
       for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
       }
        */
       /*123,456,789
       int num=1;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;

       }
        */
       /*ABC,DEF,GHI
       char ch='A';
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
       }
        */
       //A,BB,CCC,DDDD
      /* for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        cout<<endl;
       }
        */
       //1,12,123,1234
       /*for(int i=0;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
       }
        */
       //Reverse triangle for number and alphabet
     /*for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
       }
        
        
       
       for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=i+1;j>0;j--){
            cout<<ch;
            ch--;
        }
        cout<<endl;
       }
        */ 
       //Floyd's triangle pattern
       /*
       int num=1;
       for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
       }
        */
       //Floyd's triangle pattern for alphabet
       /*
       char ch='A';
       for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
       }
        */
       //Inverted Triangle pattern
      /* for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
            for(int k=0;k<n-i;k++){
                cout<<i+1;
            }
       
        cout<<endl;
       }
        */
       
      /* for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        char ch='A'+i;
        for(int k=0;k<n-i;k++){
            cout<<ch;
        }
        cout<<endl;
       }
        */
       //Pyramid pattern
       for(int i=0;i<n;i++){
        //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //num 1 n-i-1
        for(int k=1;k<=i+1;k++){
            cout<<k;
        }
        for(int l=i;l>0;l--){
            cout<<l;
        }
        cout<<endl;
       }

}