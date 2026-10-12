//https://codeforces.com/problemset/problem/1676/A
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string s;
	while(t>0){
		cin>>s;
		int start=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
		if(start==(s[3]-'0')+(s[4]-'0')+(s[5]-'0'))
			cout<<"yes\n";
		else
			cout<<"no\n";
		t--;
	}
}
