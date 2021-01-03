
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
		int n;cin>>n;
		// vector<int> v(n,0);
		vector<int> v(n);

		int sum = 0;
		int x;
		for(int i = 0;i<n;i++){
			// cin>>v[i];
			cin>>x;
			v.push_back(x);

			sum += v[i];
		}
		int c1 = (sum+1)/n-1;
		int s = c1 * (n-1);
		sort(v.begin(),v.end());
		if(v[n-1]>c1)
			s = v[n-1] * (n-1);
			cout<<s-sum<<"\n";
		
      
	}
	
}


  		



