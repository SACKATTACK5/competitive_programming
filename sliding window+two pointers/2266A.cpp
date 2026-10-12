//https://codeforces.com/problemset/problem/2266/a
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n;
		int m=n+1;
		for(int i=0;i<3;i++){
			cin>>k;
			if(k<m)
				m=k;
		}
		cout<<n-m<<endl;
	}
}
