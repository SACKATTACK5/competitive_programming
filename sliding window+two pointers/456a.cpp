//https://codeforces.com/problemset/problem/456/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int,int> > v;
	pair<int ,int> p;
	for(int i=0;i<n;i++){
		cin>>p.first>>p.second;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	int i=0;
	while(i<n-1){
		if(v[i].second>v[i+1].second){
			cout<<"Happy Alex"<<endl;
			return 0;
		}
		i++;
	}
	cout<<"Poor Alex"<<endl;
}
