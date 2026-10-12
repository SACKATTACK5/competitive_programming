//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
#include<iostream>
using namespace std;
int ans=0;
void ways(int s,int e){
	if(s==e){
		ans++;
	}
	else if(s>e)	return;
	ways(s+1,e);
	ways(s+2,e);
	ways(s+3,e);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int s,e;
	cin>>s>>e;
	ways(s,e);
	cout<<ans;
}
