#include<bits/stdc++.h>
using namespace std;

    int threeSumClosest(vector<int>&nums, int target){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closestSum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-1;i++){
            int left=i+1, right=n-1;

            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<abs(target-closestSum)) closestSum=sum;

                if(sum==target) return sum;

                else if(sum<target) left++;

                else right--;
            }
        }
        return closestSum;

    }

int main(){
    vector<int> nums={-1,2,1,4};
    int target=1;

    cout<<threeSumClosest(nums,target)<<endl;
}