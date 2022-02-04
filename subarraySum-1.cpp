#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define M 1000000007
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<endl
#define next_line() cout<<endl
#define inp1(a) int a;cin>>a;
#define inp2(a,b) int a,b;cin>>a>>b;
#define inp3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define inp4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define inpArray(arr) for(auto &val:arr)cin>>val;
using namespace std;
using namespace __gnu_pbds;
vector<int>dp;
void solve(){
	inp2(n,x);
	vector<int>a(n,0);
	inpArray(a);
	if(n==1){
		int p=(a[0]==x);
		println(p);
	}
	dp.push_back(a[0]);
	for(int i=1;i<n;++i){
		int l=dp.size();
		dp.push_back(dp[l-1]+a[i]);
	}
	int count=0,p1=0,p2=1;
  if(dp[0]==x)count++;
	while(p2<n){
		int val;
		if(p1==0) val=dp[p2];
		else val=dp[p2]-dp[p1-1];

		if(val==x) p1++,p2++,count++;
		else if(val>x) p1++;
		else p2++;
	}
	println(count);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// inp1(t);
	int t=1;
	while(t--){
		solve();
	}
}
