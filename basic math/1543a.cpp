//https://codeforces.com/problemset/problem/1543/A
#include<iostream>
#include<algorithm>
#define B long long int 
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	int t;
	B a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a==b){
			cout<<"0 0\n";
		}
		else if(!a || !b){
			if(!a)
				cout<<b<<" "<<a<<"\n";
			else
				cout<<a<<" "<<b<<"\n";
		}
		else if(abs(a-b)==1){
			cout<<"1 0\n";
		}
		else{
			B df=max(a,b)-min(a,b);
			B to_add=df-max(a,b)%df;
			B to_sub=max(a,b)%df;
			if(__gcd(a,b)==df){
				cout<<df<<" 0\n";
				continue;
			}
			if(to_add<to_sub){
				cout<<df<<" "<<to_add<<"\n";
			}
			else{
				cout<<df<<" "<<to_sub<<"\n";
			}
		}
	}
}
