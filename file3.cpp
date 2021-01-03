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

void solve(char a[][105],int n,int m,int k,int s){
	bool success = true;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			char e = a[i][j];
			if(s<k){
				success = false;
				break;
			}else if(e=='*'){
				s += 5;
			}else if(e=='.'){
				s -= 2;
			}else{
				break;
			}
			if(j!=n-1){
				s -= 1;
			}

		}
	}
	if(success){
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
int32_t main(){
	// io();
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[105][105];
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>a[i][j];
		}
	}
	solve(a,n,m,k,s);
	
}


  		



