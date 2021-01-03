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
		int n,m;cin>>n>>m;
		int a[n]; int b[m];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		for(int i = 0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m,greater<int>());
		int sumA,sumB;
		sumA =  sumB = 0;
		for(int i = 0;i<n;i++){
			sumA += a[i];
		}
		for(int i = 0;i<m;i++){
			sumB += b[i];
		}
		int i = 0;
		int j = 0;
		int cnt = 0;
		bool success = false;
		// cout<<sumA<<" "<<sumB<<"\n";
		while(i<=n-1 and j<=m-1){
			
			if(sumA>sumB){

				// cout<<cnt<<"\n";
				success = true;
				break;
			}

			cnt++;
			sumA -= a[i];
			sumB -= b[j];
			sumA += b[j];
			sumB += a[i];
			if(sumA>sumB){

				// cout<<cnt<<"\n";
				success = true;
				break;
			}
			// cout<<sumA<<" "<<sumB<<"\n";
			// swap(a[i],b[j]);

			i++;j++;
				// cout<<"cnt"<<cnt<<"\n";
			// swap(A,b[])
		}
		if(success){
			cout<<cnt<<"\n";
		}else{
			cout<<-1<<"\n";
		}
	}
	
}


  		




