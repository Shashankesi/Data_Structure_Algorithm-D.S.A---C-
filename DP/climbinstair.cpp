// int get(int n, vector<int> &dp){
//     if(n<=0){
//         return 0;
//     }
//     if(dp[n]!=-1){
//         return d[n];
//     }
//     int one=1+ get(n-1,dp);
//     int two=1+get(n-2,dp);
//     return dp[n]=min(one,two);
// }
// int get(int ind,vector<int> & v,vector<int> & dp){
// 	if(ind<0){
// 		return 0;
// 	}
// 	if(dp[ind] !=-1){
// 		return dp[ind];
// 	}
// 	int nottake =0+get(ind -1,v,dp);
// 	int take= v[ind]+get(ind-2,v,dp);
// 	return dp[ind]=max(take,nottake);
// }
// void solve(){
//  	int n;
//  	cin>>n;
//  	vextor<int> dp(n+1,-1);
//  	int ans=get(n,dp);
//  	cout<<ans<<endl;
// }