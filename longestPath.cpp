#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[100005];
int dp[100005];
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
int solve(int src){
	if(dp[src] != -1){
		return dp[src];
	}
	bool leaf = 1;
	int bestChild = 0;
	for(auto child: g[src]){
		leaf = 0;
		bestChild = max(bestChild,solve(child));
	}
	return dp[src] = leaf ? 0 : 1 + bestChild;
}



int32_t main(){
	// io();
	int n,m;
	cin>>n>>m;
	memset(dp,-1,sizeof(dp));
	for(int i =0;i<m;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);

	}
	int ans = 0 ;
	for(int i =1;i<=n;i++){
			ans = max(ans,solve(i));
	}
	cout<<ans;
}


  		



