#include<bits/stdc++.h>
#define println(x) cout<<x<<endl
#define ll long long
using namespace std;
void solve(){
  int n; cin>>n;
  std::vector<int>a(n,0);
  for(auto &val:a)cin>>val;
  int ans=0,p1=0,p2=0;
  map<int,int>freq;
  while(p1<n){
    int x=a[p1];
    freq[x]++;
    if(freq[x]>1){
      while(freq[x]>1){
        freq[a[p2++]]--;
      }
    }
    int len=p1-p2+1;
    ans=max(ans,len);
    p1++;
  }
  println(ans);
}
int main(){
  int t=1;
  while(t--){
    solve();
  }
}
