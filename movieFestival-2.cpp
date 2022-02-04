#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<endl
#define inp(x) int x;cin>>x;
#define inpArray(arr) for(auto &val:arr)cin>>val;
using namespace std;
void solve(){
  int n,k; cin>>n>>k;
  std::vector<pair<int,int>>a;
  while(n--){
    int start,end; cin>>start>>end;
    a.push_back({end,start});
  }
  n=a.size();
  multiset<int>ms;
  int count=0;
  sort(a.begin(),a.end());
  for(auto [end,start]:a){
    auto ub=ms.upper_bound(start);
    if(ub!=ms.begin())ms.erase(--ub);
    if(ms.size()<k){
      ms.insert(end);
      count++;
    }
  }
  println(count);
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
