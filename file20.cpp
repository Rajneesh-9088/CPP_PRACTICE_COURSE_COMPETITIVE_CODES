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
	int t,n,m;
	cin>>t;
	
	while(t--){
		int ans = 0;
		vector<int> v(202,0);
		cin>>n>>m;
			for(int i=0;i<n;i++){
				int x;
				cin>>x;
				v[x]++;
			}
			for(int j = 0;j<m;j++)	{
				int y;
				cin>>y;
				v[y]++;
			}
			for(int i = 0;i<202;i++){
				if(v[i]==2){
					ans++;
				}
			}
			cout<<ans<<"\n";
			v.resize(202);
	}
	
}


  		



