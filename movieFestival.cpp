#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<endl
#define inp(x) int x;cin>>x;
#define inpArray(arr) for(auto &val:arr)cin>>val;
using namespace std;
void solve(){
  inp(n);
  vector<pair<int,int>>a;
  while(n--){
    int start,end; cin>>start>>end;
    a.push_back({end,start});
  }
  n=a.size();
  sort(a.begin(),a.end());
  int ans=1;
  auto [prevEnd,prevStart]=a[0];
  for(int i=1;i<n;++i){
    auto [end,start]=a[i];
    if(prevEnd<=start){
      prevEnd=end;
      ans++;
    }
  }
  println(ans);
}
int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// inp(t);
  int t=1;
  while(t--){
    solve();
  }
}
