//https://codeforces.com/problemset/problem/1201/a
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int grades[m];
	char students;
	int map[m][5]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>students;
			map[j][students-'A']++;
		}
	}
	for(int i=0;i<m;i++)
		cin>>grades[i];
	int ans=0;
	for(int i=0;i<m;i++){
		ans+=(max(map[i][0],max(map[i][1],max(map[i][2],max(map[i][3],map[i][4])))))*grades[i];
	}
	cout<<ans;
}
