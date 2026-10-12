//https://codeforces.com/problemset/problem/762/b
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int a,b,c,m;
	cin>>a>>b>>c;
	cin>>m;
	vector<int> usb;
	vector<int> ps2;
	int p;
	string t;
	for(int i=0;i<m;i++){
		cin>>p;
		cin>>t;
		if(t=="USB")
			usb.push_back(p);
		else
			ps2.push_back(p);
	}
	sort(usb.begin(),usb.end());
	sort(ps2.begin(),ps2.end());
	int u=0;
	p=0;
	int cnt=0;
	long long sum=0;
	while(p<ps2.size()&&u<usb.size()){
		if(ps2[p]>usb[u]){
			if(a>0){
				a--;
				cnt++;
				sum+=usb[u];
				u++;
			}
			else if(c>0){
				c--;
				cnt++;
				sum+=usb[u];
				u++;
			}
			else{
				u=usb.size();
			}
		}
		else{
			if(b>0){
				b--;
				cnt++;
				sum+=ps2[p];
				p++;
			}
			else if(c>0){
				c--;
				cnt++;
				sum+=ps2[p];
				p++;
			}
			else{
				p=ps2.size();
			}
		}
	}
	while(p<ps2.size()){
		if(b>0){
			b--;
			cnt++;
			sum+=ps2[p];
			p++;
		}
		else if(c>0){
			c--;
			cnt++;
			sum+=ps2[p];
			p++;
		}
		else{
			p=ps2.size();
		}
	}
	while(u<usb.size()){
		if(a>0){
			a--;
			cnt++;
			sum+=usb[u];
			u++;
		}
		else if(c>0){
			c--;
			cnt++;
			sum+=usb[u];
			u++;
		}
		else{
			u=usb.size();
		}
	}
	cout<<cnt<<" "<<sum;
}
