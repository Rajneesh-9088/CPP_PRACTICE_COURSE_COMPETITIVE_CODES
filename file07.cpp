#include<bits/stdc++.h>
using namespace std;
#define int long long
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
int32_t main(){
	io();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(auto &it: a) cin>>it;
			vector<int> res(n+1,1);
		n = unique(a.begin(),a.end()) - a.begin();
		a.resize(n);
		for(int i = 0;i<n;i++){
			res[a[i]] += 1;
		}
		res[a[0]] -= 1;
		res[a[n-1]] -= 1;
		int ans = 1e9;
		for(int i = 0;i<n;i++){
			ans = min(ans,res[a[i]]);
		}
		cout<<ans<<endl;


	}
	
}


  		



