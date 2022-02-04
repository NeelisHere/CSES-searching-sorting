#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,x,ans=0;
	cin>>n>>x;
	vector<int>a(n,0);
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a.begin(),a.end());
	int p1=0,p2=n-1;
	while(p1<=p2){
		int val=a[p1]+a[p2];
		if(val>x){
			p2--;
		}else if(val<=x)p1++,p2--;
		ans++;
	}
	cout<<ans<<endl;
}
int main() {
	int t=1;
	while(t--){
		solve();
	}
}
