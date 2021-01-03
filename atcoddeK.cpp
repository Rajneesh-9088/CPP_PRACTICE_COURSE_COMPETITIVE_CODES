#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int N = 105;
// vector<int> v(N,0);
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}

string solve(vector<int> &v,int k){
	// vector<int> dp(k+1,0);
	bool dp[k+1];
	memset(dp,0,sizeof dp);
	// int  dp(k+1);
	// memset(dp,0,sizeof(dp));
	for(int i = 1;i<=k;i++){
		for(int move: v){
			if(move> i){
				continue;
			}
			if(dp[i-move] == 0){
				dp[i] = 1;
			}
		}
	}
	return dp[k]?"First":"Second";
}


int32_t main(){
	// io();
	int n,k;
	cin>>n>>k;
	// v.clear();
	vector<int> v(n);
	for(int i = 0;i<n;i++){
			cin>>v[i];
	}


	cout<<solve(v,k);
	
}


  		



