//https://codeforces.com/problemset/problem/676/c
#include<iostream>
using namespace std;
int countx(string s,char c,int k){
	int l=0;
	int r=0;
	int changes=0;
	int mx=0;
	while(r<s.size()){
		if(s[r]!=c)
			changes++;
		while(changes>k){
			if(s[l]!=c)
				changes--;
			l++;
		}
		mx=max(mx,r-l+1);
		r++;
	}
	return mx;
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	cout<<max(countx(s,'a',k),countx(s,'b',k));
}
