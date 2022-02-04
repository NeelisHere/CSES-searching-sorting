#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,ans=0,customerCount=0;
	cin>>n;
	multiset<pair<int,int>>s;
	for(int i=0;i<n;++i){
		int entry,exit;
		cin>>entry>>exit;
		s.insert({entry,1});
		s.insert({exit,-1});
	}
	for(auto [time,status]:s){
		customerCount+=status;
		ans=max(ans,customerCount);
	}
	cout<<ans<<endl;
}
int main() {
	int t=1;
	while(t--){
		solve();
	}
}
