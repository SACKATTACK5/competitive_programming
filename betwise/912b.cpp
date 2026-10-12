//https://codeforces.com/problemset/problem/912/B
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	long long n,m;
	cin>>n>>m;
	if(m==1){
		cout<<n;
		return 0;
	}
	long long w=(sizeof(n)*8)-__builtin_clzll(n);
	long long res=(1LL<<w)-1;
	cout<<res;
}
