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
		 
		string s; 
		
		cin>>n>>k;
		for(int i = 1 ;i<=k;i++){
			s += 'a';
		}
		int j = 2;
		int i = k+1;
		while(i<=n){
			
			i++;
			
			if(j==1){
				s += 'a';
				j++;
			
			}else if(j==2){
				s += 'b';
				j++;
			}else if(j==3){
				s += 'c';
				j = 1;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
	
}


  		



