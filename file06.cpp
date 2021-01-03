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
	// io();
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> cnt(n+1),idx(n+1);
		for(int i = 0;i<n;i++){
			int x;cin>>x;
			++cnt[x];
			idx[x] = i +1;
		}
		int ans = -1;
		for(int i=0;i<=n;i++){
			if(cnt[i]==1){
				ans = idx[i];
				break;
			}
		}
		cout<<ans<<"\n";
	}
}


  		



