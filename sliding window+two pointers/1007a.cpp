//https://codeforces.com/problemset/problem/1007/A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int ans=0;
	int l=0;
	int r=1;
	while(r<n){
		if(arr[r]==arr[l])
			r++;
		else{
			ans++;
			r++;
			l++;
		}
	} 
	cout<<ans;
}
