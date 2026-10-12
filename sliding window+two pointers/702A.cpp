//https://codeforces.com/problemset/problem/702/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0,r=1;
	int cnt=1;
	int max=1;
	while(r<n){
		if(arr[r]>arr[r-1]){
			cnt++;
		}
		else{
			if(max<cnt){
				max=cnt;
			}
			cnt=1;
			l=r;
		}
		r++;
	}
	if(cnt>max)
		max=cnt;
	cout<<max;
}
