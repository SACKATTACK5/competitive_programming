//https://codeforces.com/problemset/problem/1256/d
#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int q,n;
	long long k;
	string s;
	cin>>q;
	while(q--){
		cin>>n>>k;
		cin>>s;
		int l=0;
		int r;
		while(s[l]=='0') l++;
		r=l+1;
		while(r<n&&k>0){
			if(s[r]=='0'){
				char c=s[r];
				if(r-l>k){
					s[r]=s[r-k];
					s[r-k]=c;
					k-=k;
				}
				else{
					s[r]=s[l];
					s[l]=c;
					k-=(r-l);
					l++;	
				}
			}
			r++;
		}
		cout<<s<<endl;
	}
}
