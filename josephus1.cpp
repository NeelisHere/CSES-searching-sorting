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
  inp1(n);
  deque<int>dq;
  for(int i=1;i<=n;++i){
    dq.push_back(i);
  }
  int x=1;
  while(!dq.empty()){
    int val=dq.front();
    dq.pop_front();
    if(x%2){
      dq.push_back(val);
    }else{
      print(val);
    }
	x++;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// inp1(t);
  int t=1;
  while(t--){
    solve();
  }
}
