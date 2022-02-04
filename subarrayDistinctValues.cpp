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
	inp2(n,k);
	vector<int>a(n,0);
	inpArray(a);
	map<int,int>t;
	ll count=0;
	int p1=0,p2=0,d=0;
	while(p2<n){
		t[a[p2]]++;
		if(t[a[p2]]==1)d++;
		// p2++;
		while(d>k){
			t[a[p1]]--;
			if(t[a[p1]]==0)d--;
			p1++;
		}
		count+=(p2-p1+1);
		p2++;
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
