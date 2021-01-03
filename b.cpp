#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int N = 5e2 + 5;
// string s[N];
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
int32_t main(){
	io();
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char s[n+1][m+1];
		for(int i =1;i<=n;i++){
			for(int j = 1;j=<m;j++){
				cin>>s[i];
			}
		}
		int ans = 0;
		int k = max(n,m);
		int parity = 0;
		for(int i =1;i<=n;i++){
			for(int j = 1;i<=m;j++){
				if(s[i][j]=='*'){
					ans++;
					       if(parity){
					         parity = 0;
					      ans++;
  						  }
				         for(int l = i;l<=n;i++){
					if(parity){
						break;
					}
					for(int k = j-l+1;k<=j+l-1;k++){
						if(s[i][j]=='*'){
							continue;
						}else{
							parity = 1;
							break;
						}
					}

				}
				}
				
			}
		}
		cout<<ans<<"\n";
	}
	
}


  		



