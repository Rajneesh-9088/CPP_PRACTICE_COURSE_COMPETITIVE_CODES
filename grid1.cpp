#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007;
char grid [1005][1005];

void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
int solve(int h,int w){
	int dp[h+1][w+1];
	dp[h][w] = 1;
	for(int i = h;i>=1;i--){
		for(int j = w;j>=1;j--){
			if((i==h) and (j==w)){
				continue;
			}
			if(grid[i][j]=='#'){
				dp[i][j] = 0;
			}else{
				dp[i][j] = (((i==h) ? 0 : dp[i+1][j] ) + ((j==w) ? 0 : dp[i][j+1])) % mod;
			}
		}
	}
	return dp[1][1];
}
int32_t main(){
	// io();
	int h,w;
	cin>>h>>w;
	for(int i = 1;i<=h;i++){
		for(int j = 1;j<=w;j++){
			cin>>grid[i][j];
		}
	}
	// for(int i = 1;i<=h;i++){
	// 	for(int j = 1;j<=w;j++){
	// 		cout<<grid[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	cout<<solve(h,w);
	
}


  		



