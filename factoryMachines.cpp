#include<bits/stdc++.h>
#define int long long
using namespace std;
std::vector<int>a;
int howMany(int time){
  int count=0;
  for(auto &val:a){
    count+=(time/val);
  }
  return count;
}
void solve(){
  int n,t; cin>>n>>t;
  while(n--){
    int val; cin>>val;
    a.push_back(val);
  }
  n=a.size();
  sort(a.begin(),a.end());
  int lo=1,hi=a[0]*t,mid,ans=hi;
  while(lo<=hi){
    mid=lo+(hi-lo)/2;
    if(howMany(mid)<t){
      lo=mid+1;
    }else{
      ans=mid;
      hi=mid-1;
    }
  }
  cout<<ans;
}
signed main(){
  solve();
}
