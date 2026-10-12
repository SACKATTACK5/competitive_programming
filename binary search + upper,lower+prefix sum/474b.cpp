//https://codeforces.com/problemset/problem/474/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,a,q;
	cin>>n;
	int arr[n+1]={0};
	for(int i=1;i<n+1;i++){
		cin>>a;
		arr[i]=arr[i-1]+a;
	}
	cin>>m;
	while(m>0){
		cin>>q;
		int l=1;
		int h=n;
		int mid;
		while(l<h){
			mid= l+(h-l)/2;
			if(arr[mid]<q){
				l=mid+1;
			}
			else
				h=mid;
		}
		cout<<l<<endl;
		m--;
	}
}
