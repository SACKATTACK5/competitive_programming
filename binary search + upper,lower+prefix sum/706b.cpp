//https://codeforces.com/problemset/problem/706/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q,x;
	cin>>n;
	int shops[n];
	for(int i=0;i<n;i++)
		cin>>shops[i];
	sort(shops,shops+(sizeof(shops)/sizeof(shops[0])));
	cin>>q;
	while(q>0){
		cin>>x;
		int upper=sizeof(shops)/sizeof(shops[0])-1,lower=0;
		if(x>=shops[upper]){
			cout<<sizeof(shops)/sizeof(shops[0])<<endl;
		}
		else if(x<shops[lower])
			cout<<0<<endl;
		else{
			int *i=	upper_bound(shops,shops+upper+1,x);
			int ind=i-shops;
			cout<<ind-lower<<endl;
		}
		q--;
	}
}
