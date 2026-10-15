//https://codeforces.com/problemset/problem/231/A
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t,n;
	cin>>t;
	int ans=0;
	while(t--){
		int j=0;
		for(int i=0;i<3;i++){
			cin>>n;
			j+=n;
		}
		if(j>=2)
			ans++;
	}
	cout<<ans;
}
