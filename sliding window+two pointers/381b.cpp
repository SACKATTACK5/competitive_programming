//https://codeforces.com/problemset/problem/381/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> v;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end()); 
	vector<int> uniq=v;
	uniq.erase(unique(uniq.begin(),uniq.end()),uniq.end());
	if(uniq.size()==n||uniq.size()==1){
		cout<<uniq.size()<<endl;
		reverse(uniq.begin(),uniq.end());
		for(int i=0;i<uniq.size();i++)
			cout<<uniq[i]<<' ';
		return 0;
	}
	else{
		int k=v[v.size()-1];
		for(int i=v.size()-2;i>0;i--){
			if(v[i]==k){
				v.erase(v.begin()+i);
			}
			else if(v[i]==v[i-1]){
				int j=v[i];
				v.erase(v.begin()+i);
				if(j<v[v.size()-1])
					v.push_back(j);
			}
		}
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<' ';
	}
}
