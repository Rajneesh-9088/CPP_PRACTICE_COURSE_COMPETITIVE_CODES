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
int solve(int *a,int n,int key){
int s = 0;int e = n-1; int ans = -1;
	while(s<=e){
		// int mid = s + (e-s)/2;
		int mid = (s+e)/2;
		if(a[mid]==key){
			ans = key;
			
		}else if(a[mid]>key){
			e = mid-1;
		}else{
			s = mid + 1;
		}
	}
	return  ans;

}
int32_t main(){
	io();
	int n;cin>>n;
	int key;cin>>key;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<solve(a,n,key);
	
}


  		



