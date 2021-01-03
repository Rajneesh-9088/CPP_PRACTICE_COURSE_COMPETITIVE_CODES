#include<bits/stdc++.h>
using namespace std;
#define int long long
#define inf 1e9
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
int solve(vector<int> &v,int n,int k){
	// int n = v.size();
	vector<int> dp(n+1);
		dp[1] = 0;
		int ans = 1e9;
		// int option1,option2;
		for(int i = 2;i<=n;i++){
			for(int i =1;i<=k;i++){
				ans = min(ans,abs(v[i]-v[i-k]) + dp[i-k]) ;

			}
			dp[i] = ans;
			
			
		}
		return dp[n];
}
int32_t main(){
		// io();
	int n,k;cin>>n>>k;
	vector<int> v(n+1);
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	cout<<solve(v,n,k);


	
}


  		



