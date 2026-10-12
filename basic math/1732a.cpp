//https://codeforces.com/problemset/problem/1732/A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	int t;
	int n;
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n==1){
			if(arr[0]==1)
				cout<<0<<"\n";
			else
				cout<<1<<"\n";
			continue;
		}
		long long g=__gcd(arr[0],arr[1]);
		for(int i=2;i<n;i++){
			if(g==1){
				ans=0;
				break;
			}
			g=__gcd(g,arr[i]);
		}
		if(g>1){
			if(__gcd(g,__gcd(arr[n-1],(long long)n))==1)
				ans=1;
			else if(__gcd(g,__gcd(arr[n-2],(long long)n-1))==1)
				ans=2;
			else
				ans=3;
		}
		cout<<ans<<"\n";
	}
}
