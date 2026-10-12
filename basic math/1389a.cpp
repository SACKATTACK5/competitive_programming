//https://codeforces.com/problemset/problem/1389/a
#include<iostream>
#include<algorithm>
using namespace std;
long long lcm(long long a,long long b){
	return (a*b)/__gcd(a,b);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	int t;
	long long l,r;
	cin>>t;
	while(t--){
		cin>>l>>r;
		long long x=l;
		long long y=l*2;
		while(y<=r){
			if(lcm(x,y)>r){
				if(y==r){
					y= -1;
					x= -1;
					break;
				}
				y+=x;
			}
			else{
				break;
			}
		}
		if(y>r){
			x=-1;y=-1;
		}
		cout<<x<<" "<<y<<"\n";
	}
}
