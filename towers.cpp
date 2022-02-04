#include<bits/stdc++.h>
#define ll long long
#define println(x) cout<<x<<endl
using namespace std;
void solve(){
  int n; cin>>n;
  std::vector<int>cubes(n,0);
  for(auto &val:cubes)cin>>val;
  multiset<int>s;
  for(auto &cube:cubes){
    if(s.upper_bound(cube)!=s.end()){
      auto ub=s.upper_bound(cube);
      s.erase(ub);
    }
    s.insert(cube);
  }
  int ans=s.size();
  println(ans);
}
int main(int argc, char const *argv[]) {
  int t=1;
  while(t--){
    solve();
  }
  return 0;
}
