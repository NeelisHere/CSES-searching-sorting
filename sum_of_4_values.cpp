#include<bits/stdc++.h>
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

void solve(){
  inp2(n,sum);
  std::vector<int>a(n);
  inpArray(a);
  map<int,pair<int,int>>t;
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      int val=a[i]+a[j];
      t[val]={i,j};
    }
  }
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      int val=a[i]+a[j],rem=sum-val;
      if(t.find(rem)!=t.end()){
        set<int>s;
        auto [index1,index2]=t[rem];
        s.insert(index1); s.insert(index2);
        s.insert(i); s.insert(j);
        if(s.size()==4){
          for(auto &pos:s){
            print(pos+1);
          }
          next_line();
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
