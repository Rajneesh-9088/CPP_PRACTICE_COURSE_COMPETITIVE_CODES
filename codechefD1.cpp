#include<bits/stdc++.h>
using namespace std;
#define int long long
void io(){

    
}
int32_t main(){
	io();
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==k){
			for(int i = 1;i<=n;i++){
				cout<<i<<" ";
			}
			// cout<<"\n";
		}
		else if(n%2==0){
			  int parity = 1;
		for(int i = 1;i<=n;i++){
			if(parity){
				cout<<-i<<" ";
				parity = 0;
			}else{

				cout<<i<<" ";
				parity = 1;
			}
		}
		// cout<<"\n";
		}
		else{
				int parity = 1;
		for(int i = 1;i<=n;i++){
			if(parity){
				cout<<i<<" ";
				parity = 0;
			}else{

				cout<<-i<<" ";
				parity = 1;
			}
		}
		// cout<<"\n";






		}
	}
	
}


  		



