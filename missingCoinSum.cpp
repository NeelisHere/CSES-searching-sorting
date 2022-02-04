  #include <bits/stdc++.h>
  #define ll long long
  using namespace std;
  void solve(){
  	int n; cin>>n;
  	vector<int>a(n,0);
  	for(auto &val:a)cin>>val;
  	sort(a.begin(),a.end());
  	ll s=1;
  	for(int val:a){
  		if(val>s)break;
  		else s+=val;
  	}
  	cout<<s<<endl;
  }
  int main() {
  	int t=1;
  	while(t--){
  		solve();
  	}
  }
