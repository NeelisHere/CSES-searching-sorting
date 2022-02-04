#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<endl
#define inp(x) int x;cin>>x;
#define inpArray(arr) for(auto &val:arr)cin>>val;
using namespace std;
void solve(){
  int n,s; cin>>n>>s;
  std::vector<int>arr(n,0);
  map<int,int>t;
  for(int i=0;i<n;++i){
    cin>>arr[i];
    t[arr[i]]=i;
  }
  bool isThere=false;
  for(int i=0;i<=n-2;++i){
    for(int j=i+1;j<=n-1;++j){
      int val=arr[i]+arr[j],rem=s-val;
      if(t.find(rem)!=t.end()){
        set<int>ans;
        ans.insert(i); ans.insert(j); ans.insert(t[rem]);
        if(ans.size()==3){
          for(auto &x:ans){
            print(x+1);
          }
          println("");
          return;
        }
      }
    }
  }
  println("IMPOSSIBLE");
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
