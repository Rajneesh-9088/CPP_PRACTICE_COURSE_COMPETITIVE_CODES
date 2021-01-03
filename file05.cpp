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
			int n;cin>>n;
			int mid = n/2;
			for(int i = mid +1;i<=n;i++){
				cout<<i<<" ";
			}
			for(int i = mid;i>=1;i--){
				cout<<i<<" ";
			}
			cout<<"\n";



		}


	return 0;
	
}


  		



