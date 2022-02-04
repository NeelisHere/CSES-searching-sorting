#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	int n;
	ll ans=0;
	cin>>n;
	vector<int>a(n);
	for(auto &val:a)cin>>val;
	sort(a.begin(),a.end());
	for(auto &val:a)ans+=abs(val-a[n/2]);
	cout<<ans<<endl;
}
int main() {
	int t=1;
	while(t--){
		solve();
	}
}
