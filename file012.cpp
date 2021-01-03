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
const int N = 3005;
vector<int> v(3005);
int32_t main(){
	io();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i =1;i<=n;i++){
			cin>>v[i];
		}
		int l,r;
		l = 1;
		r = n;
		int change = 1;
		if(n%2==0){
			while(l!=r){
			if(change){
				cout<<v[l]<<" ";
				change = 0;
				l++;
				
			} 
			if(change==0){
				cout<<v[r]<<" ";
				change = 1;
				r--;
				
			}

		  }
		}else{
			while(l!=r){
			if(change){
				cout<<v[l]<<" ";
				change = 0;
				l++;
				
			} 
			if(change==0){
				cout<<v[r]<<" ";
				change = 1;
				r--;
				

		  }
		  cout<<v[l]<<" ";			
		}
		}
	}
	cout<<"\n";
}


  		



