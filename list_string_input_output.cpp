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
		int n,m;cin>>n>>m;
		int a[505][505];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int cnt = 0;
		for(int i = 1;i<n;i++){
			for(int j = 1;j<m;j++){
				if(a[i][j]!=a[i-1][j-1]){
					cnt++;
				}
			}
		}
		int q;cin>>q;
		while(q--){
			int x,y,newVal;
			cin>>x>>y>>newVal;
			x--,y--;
			int oldVal;
			oldVal = a[x][y];
			a[x][y] = newVal;
			
			
			 
			
			          
			
			
			if(x-1>=0 and y-1>=0){
				if(a[x][y]==a[x-1][y-1]and (a[x][y]!=oldVal)) cnt--;
			}
			if(x+1<n and y+1<m){
				if(a[x][y]==a[x+1][y+1]and (a[x][y]!=oldVal)) cnt--;
			}
			if(x+1<n and y+1<m){
				if(a[x][y]!=a[x+1][y+1]and (a[x+1][y+1]==oldVal)) cnt++;
			}
			if(x-1>=0 and y-1>=0){
				if(a[x][y]!=a[x-1][y-1]and (a[x-1][y-1]==oldVal)) cnt++;
			}
			cout<<(cnt==0?"Yes":"No")<<endl;
			

			
			 
			
			          
			
			
		}
	}
	
}


  		



