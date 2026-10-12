//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
#include<iostream>
using namespace std;
bool solve(long long x,long long target){
	if(x==target){
		return true;
	}
	else if(x>target){
		return false;
	}
	bool b;
	b=solve(x*10,target);
	if(b)
		return true;
	b= solve(x*20,target);
	if(b)
		return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		if(solve(1,n))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
