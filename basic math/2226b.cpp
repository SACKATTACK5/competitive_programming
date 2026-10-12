//https://codeforces.com/problemset/problem/2226/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int cnt=0;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=n-1;i>0;i--){
			if(abs(arr[i]-arr[i-1])==__gcd(arr[i],arr[i-1]))
				cnt++;
		}
		cout<<cnt<<"\n";
	}
}
