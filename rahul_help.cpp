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
		int s = 0;int e = n-1; 
		int mid = 0;
	while(s<=e){
		 mid = (s+e)/2;
		if(a[mid]==key){
			return mid;
			break;
		}
		else if(key<=a[mid]){
			if(key>=a[s] and key<=a[mid]){
				e = mid - 1;
			}else{
				s = mid + 1;
			}
		}else{
			if(key>=a[mid] and key<=a[e]){
				s = mid + 1;
			}else{
				e = mid - 1;
			}
		}	
	}
	return -1;
}
int32_t main(){
	io();
	int n;cin>>n;
	int k;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	cout<<solve(a,n,k);

	
}


  		



