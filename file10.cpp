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
	int t;
	cin>>t;
	while(t--){
		int n,m,r,c;
		cin>>n>>m>>r>>c;
		if(n==1 and m == 1){
			cout<<0<<"\n";
			continue;
		}
		if(n==r and m == c){
			cout<<0<<"\n";
			continue;
		}
		int i = n-r;
		int j = m-c;
		int ans = i + j;
		int i1 = r-i;
		int j1 = c-j;
		int ans1 = i1 + j1;
		ans  = max(ans,ans1);
		cout<<ans<<"\n";
		
	}
	
}


  		



