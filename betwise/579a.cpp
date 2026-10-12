//https://codeforces.com/problemset/problem/579/A
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	long long n;
	cin>>n;
	cout<<__builtin_popcountll(n);
}
