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
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<(n <= 3 ? n-1 :2 + (n & 1))<<'\n';
	}
	return 0;
	
}


  		



