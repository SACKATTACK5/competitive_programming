//https://codeforces.com/problemset/problem/1490/b
#include<iostream>
#include<cmath>
using namespace std;
int max(int *arr){
	if(arr[0]>=arr[1]&&arr[0]>=arr[2]){
		return 0;
	}
	else if(arr[2]>arr[1]&&arr[2]>arr[0]){
		return 2;
	}
	return 1;
}
int min(int *arr){
	if(arr[0]<=arr[1]&&arr[0]<=arr[2]){
		return 0;
	}
	else if(arr[2]<arr[1]&&arr[2]<arr[0]){
		return 2;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int x;
		int rem[3]={0};
		for(int i=0;i<n;i++){
			cin>>x;
			rem[x%3]++;
		}
		int cnt=0;
		while(rem[0]!=n/3||rem[1]!=n/3){
			int start=max(rem);
			int end=min(rem);
			rem[start]--;
			rem[end]++;
			cnt+=((end-start+3)%3);
		}
		cout<<cnt<<endl;
	}
}
