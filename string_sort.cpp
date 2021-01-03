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
	// i have to submit this code for problem B good Bye
	io();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		set<int>s;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			if(s.find(a[i])!=s.end()){
				a[i]++;
				s.insert(a[i]);
			}else{
				s.insert(a[i]);
			}

		}
		cout<<s.size()<<"\n";
	}
	
}


  		



