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
		int x,y;
		cin>>x>>y;
		if(x==y){
			cout<<2 * x<<"\n";
		}else{
			cout<< 2 * max(x,y)-1<<"\n";
		}
	}
	
}


  		




