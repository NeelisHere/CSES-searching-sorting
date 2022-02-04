#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<endl
#define inp(x) int x;cin>>x;
#define inpArray(arr) for(auto &val:arr)cin>>val;
using namespace std;
void solve(){
  map<int,int>t;
  int n,sum; cin>>n>>sum;
  std::vector<int> a;
  while(n--){
    inp(val);
    a.push_back(val);
  }
  n=a.size();
  pair<int,int>p;
  bool isThere=false;
  for(int i=0;i<n;++i){
    int rem=sum-a[i];
    if(t.find(a[i])!=t.end()){
      p={i+1,t[a[i]]};
	    isThere=true;
      break;
    }
    t[rem]=i+1;
  }
  if(isThere){
  	auto [x,y]=p;
  	cout<<x<<" "<<y<<endl;
  }else{
	println("IMPOSSIBLE");
  }


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
