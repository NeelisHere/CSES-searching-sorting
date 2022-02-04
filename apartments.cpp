#include<bits/stdc++.h>
using namespace std;
vector<int>getData(int l){
  vector<int>a(l,0);
  for(int i=0;i<l;++i){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  return a;
}
void solve(){
  int n,m,k,ans=0;
  cin>>n>>m>>k;
  std::vector<int>a1=getData(n),a2=getData(m);
  int p1=0,p2=0;
  while (p1<n && p2<m) {
    if(a2[p2]+k < a1[p1]){
      p2++;
    }else if(a2[p2]-k > a1[p1]){
      p1++;
    }else if(a2[p2]>=a1[p1]-k && a2[p2]<=a1[p1]+k){
      ans++,p1++,p2++;
    }
  }
  cout<<ans<<endl;
}
int main(){
  int t=1;
  while (t--){
    solve();
  }
}
