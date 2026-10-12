//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
#include<iostream>
using namespace std;
bool ispalin(int l,int r,long long* arr){
	if(l==r||l>r){
		return true;
	}
	if(arr[l]!=arr[r]){
		return false;
	}
	ispalin(l+1,r-1,arr);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(ispalin(0,n-1,arr))
		cout<<"YES";
	else
		cout<<"NO";
}
