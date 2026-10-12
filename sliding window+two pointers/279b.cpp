//https://codeforces.com/problemset/problem/279/B
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	long long t;
	cin>>n;
	cin>>t;
	long long arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0,r=0,maxr=0;
	long long k=0;
	while(r<n){
		k+=arr[r];
		while(k>t){
			k-=arr[l];
			l++;
		}
		maxr=max(maxr,(r-l+1));
		r++;
	}
	
	cout<<maxr;
}
