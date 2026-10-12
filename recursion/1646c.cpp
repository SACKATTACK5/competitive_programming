//https://codeforces.com/problemset/problem/1646/c
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	long long x;
	cin>>t;
	long long facts[12];
	facts[0]=6;
	for(int i=1;i<12;i++){
		facts[i]=(i+3)*facts[i-1];
	}
	long long cnt=0;
	long long ans;
	while(t--){
		cin>>x;
		ans=1e12;
		for(int i=0;i<(1LL << 12);i++){
			long long sum=0;
			cnt=0;
			for(int j=0;j<12;j++){
				if(i&(1LL<<j)){
					sum+=facts[j];
					cnt++;
				}
			}
			if(sum>x)
				continue;
			cnt+=__builtin_popcountll(x-sum);
			ans=min(ans,cnt);
		}
		cout<<ans<<"\n";
	}
}
