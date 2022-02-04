#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e5+10;
void solve() {
  int n; cin>>n;
  vector<vector<int>>events;
  for(int i=1;i<=n;++i){
    int start,end; cin>>start>>end;
    events.push_back({start,0,i});
    events.push_back({end,1,i});
  }
  set<int>rooms;
  for(int i=1;i<=n;++i){
    rooms.insert(i);
  }
  std::vector<int>v(n+1,-1);
  int ans=0,temp=0;
  sort(events.begin(),events.end());
  for(auto &event:events){
    int time=event[0],type=event[1],id=event[2];
    auto room=rooms.begin();
    if(type==0){
      v[id]=*room;
      rooms.erase(room);
      temp++;
    }else{
      temp--;
      rooms.insert(v[id]);
    }
    ans=max(ans,temp);
  }
  cout<<ans<<endl;
  for(int i=1;i<=n;++i){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; //cin>>t;
  t=1;
  while(t--){
    solve();
  }
	return 0;
}
