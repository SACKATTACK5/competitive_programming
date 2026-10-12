//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include<iostream>
#include<algorithm>
using namespace std;
int n,wmax;
int w[25],v[25];
int solve(int i,int remw){
	if(i==n||remw==0)
		return 0;
	if(w[i]>remw)
		return solve(i+1,remw);
	int take=v[i]+solve(i+1,remw-w[i]);
	int leave=solve(i+1,remw);
	return max(take,leave);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	cin>>n>>wmax;
	for(int i=0;i<n;i++)
		cin>>w[i]>>v[i];
	cout<<solve(0,wmax);
}
