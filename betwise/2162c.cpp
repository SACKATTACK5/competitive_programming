//https://codeforces.com/problemset/problem/2162/c
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	long long a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(a==b){
			cout<<0<<"\n";
			continue;
		}
		if(((sizeof(a)*8)-__builtin_clzll(a))<((sizeof(b)*8)-__builtin_clzll(b))){
			cout<<-1<<"\n";
			continue;	
		}
		else if((a^b)<=a){
			cout<<1<<"\n";
			cout<<(a^b)<<"\n";
		}
		else{
			cout<<2<<"\n";
			long long msb=1LL<<((sizeof(a)*8)-__builtin_clzll(a)-1);
			cout<<(a^b^msb)<<" "<<msb<<"\n";
		}
	}
}
