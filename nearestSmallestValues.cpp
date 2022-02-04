#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	vector<int>a(n,0),result(n,0);
	for(int i=0;i<n;++i)cin>>a[i];
	stack<pair<int,int>>s;
	for(int i=n-1;i>=0;--i){
		while(!s.empty() and s.top().first>a[i]){
			int index=s.top().second;
			result[index]=i+1;
			s.pop();
		}
		s.push({a[i],i});
	}
	while(!s.empty()){
		int index=s.top().second;
		result[index]=0;
		s.pop();
	}
	for(int val:result){
		cout<<val<<" ";
	}
	cout<<'\n';
}
int main(){
	// int t; cin>>t;
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}