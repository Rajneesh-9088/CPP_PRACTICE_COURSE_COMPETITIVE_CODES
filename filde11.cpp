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

int k,n;
int solve(int x,int y,int k, int n){
	i(x<0 or x<0 ){
		reutn 0;
	}
	solve(x+k,y+k,k,n);
	solve(x+k,y-k,k,n);
	solve()
}
int32_t main(){
	io();
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y>>k>>n;

		solve(x,y,k,n);
	}
	
}


  		



