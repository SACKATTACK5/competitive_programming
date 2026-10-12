//https://codeforces.com/problemset/problem/1916/b
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	long long a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(!(b%a))
			cout<<b*(b/a)<<"\n";
		else{
			cout<<b*(a/__gcd(a,b))<<"\n";
		}
	}
}
