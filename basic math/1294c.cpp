//https://codeforces.com/problemset/problem/1294/c
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	long long x;
	cin>>t;
	while(t--){
		cin>>x;
		long long n=x;
		int s=2;
		long long n1=0,n2=0,n3=0;
		while(s*s<=n){
			if(!(x%s)){
				n1=s;
				x/=s;
				break;
			}
			s++;
		}
		s++;
		while(s*s<=n){
			if(!(x%s)){
				n2=s;
				n3=x/s;
				break;
			}
			s++;
		}
		if(n1&&n2&&n3&&n1!=n2&&n2!=n3&&n1!=n3){
			cout<<"YES\n";
			cout<<n1<<" "<<n2<<" "<<n3<<"\n";
		}
		else
			cout<<"NO\n";
	}
}
