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
void solve(){
	inp1(n);
	vector<int>a(n,0);
	inpArray(a);
	ll maxSum=a[0],maxSoFar=a[0];
	for(int i=1;i<n;++i){
		maxSoFar=max((ll)a[i],(ll)maxSoFar+a[i]);
		maxSum=max(maxSoFar,maxSum);
		// print(maxSoFar);
	}
	println(maxSum);
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
