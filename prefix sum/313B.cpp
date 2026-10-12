//https://codeforces.com/problemset/problem/313/B
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int m;
	int l,r;
	cin>>s;
	cin>>m;
	int freq[s.size()]={0};
	for(int i=1-1;i<s.size();i++){
		freq[i]=freq[i-1];
		if(s[i]==s[i-1]){
			freq[i]++;
		}
	}
	while(m>0){
		cin>>l>>r;
		int max=0;
		cout<<freq[r-1]-freq[l-1]<<endl;
		m--;
	}
}
