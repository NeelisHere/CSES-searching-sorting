#include<bits/stdc++.h>
#define ll long long
#define println(x) cout<<x<<endl
using namespace std;
void solve(){
  int n; cin>>n;
  std::vector<int> a(n),freq(n,0);
  for(auto &val:a)cin>>val;
  int ans=0;
  for(auto &val:a){
    if(!freq[val-1])ans++;
    freq[val]=1;
  }
  println(ans);
}
int main(){
  int t=1;
  while (t--) {
    solve();
  }
}
