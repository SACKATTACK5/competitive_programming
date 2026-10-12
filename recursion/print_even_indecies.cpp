//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include<iostream>
using namespace std;
void even_indx(int n,long long *arr){
	if(n==0){
		cout<<arr[n];
		return;
	}
	cout<<arr[n]<<" ";
	even_indx(n-2,arr);
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2)
		even_indx(n-1,a);
	else
		even_indx(n-2,a);
}
