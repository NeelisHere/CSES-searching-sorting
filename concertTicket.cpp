#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	multiset<int,greater<int>>s;
	vector<int>a(m,0);
	for(int i=0;i<n;++i){
		int val; cin>>val;
		s.insert(val);
	}
	for(int i=0;i<m;++i)cin>>a[i];

	for(int maxVal:a){
		auto lb=s.lower_bound(maxVal);
		if(lb==s.end() or *lb>maxVal)cout<<-1<<endl;
		else cout<<*lb<<endl;
		if(lb!=s.end())s.erase(lb);
	}
}
int main() {
	int t=1;
	while(t--){
		solve();
	}
}
