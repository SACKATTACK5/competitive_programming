//https://codeforces.com/problemset/problem/1669/a
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,r;
	cin>>t;
	int i=0;
	while(i<t){
		cin>>r;
		if(r<=1399)
			cout<<"Division 4\n";
		else if(1400<=r&&r<=1599)
			cout<<"Division 3\n";
		else if(1600<=r&&r<=1899)
			cout<<"Division 2\n";
		else
			cout<<"Division 1\n";
		i++;
	}
}
