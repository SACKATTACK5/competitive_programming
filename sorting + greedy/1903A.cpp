//https://codeforces.com/problemset/problem/1903/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n,t,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> arr;
		int first=0;
		int last=1;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			arr.push_back(x);
		}
		if(is_sorted(arr.begin(),arr.end())){
			cout<<"YES\n";	
		}
		else{
			if(k<2){
				cout<<"NO\n";
				continue;
			}
			else{
				while(!is_sorted(arr.begin(),arr.end())&&last<n-1){
					if(arr[last]<arr[last-1]&&last-first<=k){
						last++;
					}
					else{
						reverse(arr.begin()+first,arr.begin()+last);
						first=last;
						last++;
					}
				}
			}
			if(arr[last]<arr[first]){
				reverse(arr.begin()+first,arr.begin()+last+1);
			}
			if(arr[last-1]<arr[first]){
				reverse(arr.begin()+first,arr.begin()+last);
			}
			if(is_sorted(arr.begin(),arr.end())){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
}
