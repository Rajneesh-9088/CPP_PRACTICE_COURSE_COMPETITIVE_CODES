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
		int n,k;
		cin>>n>>k;
		int a[n];
		int sum = 0;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}
		if(sum%k==0){
			cout<<0<<"\n";
		}else{
			cout<<1<<"\n";
		}
	}
}


  		



