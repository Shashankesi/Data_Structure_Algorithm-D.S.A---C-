#include<bits/stdc++.h>
using namespace std;


    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        int n=arr.size();
        
        
        for(int i=0;i<n-2;i++){
            int left=i+1, right=n-1;
            while(left<right){
                int currSum=arr[i]+arr[left]+arr[right];
                
                if(currSum<sum){
                    count+=right-left;
                    left++;
                }else{
                    right--;
                }
            }
            
        }
        return count;
        
    }


int main(){
    vector<int> nums={-2,0,1,3};
    int targetSum=2;
    cout<<countTriplets(targetSum,nums)<<endl;
}