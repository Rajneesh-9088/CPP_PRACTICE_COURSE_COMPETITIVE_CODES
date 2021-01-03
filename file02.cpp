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
		int i,n,Q;
		cin>>n>>Q;
		string s;
		cin>>s;
		while(Q--){
			int l,r;
			cin>>l>>r;
			l--;
			r--;
			bool bad = true;
			for(int i = 0;i<l and bad; i++){
				if(s[i]==s[l]) bad = false;
			}
			for(i = r+1;i<n and bad ;i++){
				if(s[i]==s[r]) bad = false;
			}
			cout<<(bad ? "NO": "YES")<<'\n';
		}
	}
	
	
}


  		



