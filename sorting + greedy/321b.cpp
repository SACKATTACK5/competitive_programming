//https://codeforces.com/problemset/problem/321/B
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	vector<pair<int,int>> a;
	vector<int> b;
	vector<int> later;
	int n,m;
	cin>>n>>m;
	int k;string s;
	pair<int,int> p;
	int dmg=0;
	for(int i=0;i<n;i++){
		cin>>s>>k;
		p.first=(s=="DEF");
		p.second=k;
		a.push_back(p);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<m;i++){
		cin>>k;
		if(k==0)
			continue;
		b.push_back(k);
	}
	sort(b.begin(),b.end());
	int i=0,j=0;
	k=b.size();
	while(i<a.size()&&j<k){
		if(a[i].first==1){
			if(a[i].second<b[j]){
				i++;
				j++;
			}
			else{
				later.push_back(b[j]);
				j++;
			}
		}
		else{
			if(a[i].second>b[j]){
				later.push_back(b[j]);
				j++;
			}
			else{
				dmg+=(b[j]-a[i].second);
				i++;
				j++;
			}
		}
	}
	if(i>=a.size()){
		j=0;
		while(j<later.size()){
			dmg+=later[j];
			j++;
		}
	}
	cout<<dmg;
}
