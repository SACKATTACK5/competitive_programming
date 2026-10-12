//https://codeforces.com/problemset/problem/2125/B
#include<iostream>
#include<algorithm>
#define B long long int 
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	int t;
	B a,b,k;
	cin>>t;
	while(t--){
		cin>>a>>b>>k;
		B g=__gcd(a,b);
		B n=max((a+k-1)/k,(b+k-1)/k);
		if(n>g){
			cout<<"2\n";
		}
		else
			cout<<"1\n";
	}
}
