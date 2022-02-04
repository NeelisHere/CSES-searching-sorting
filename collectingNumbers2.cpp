#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,m; cin>>n>>m;
	vector<int>arr(n),pos(n+1,INT_MAX);
	for(int i=0;i<n;++i){
		cin>>arr[i];
		pos[arr[i]]=i;
	}
	int count=0;
	for(auto &val:arr){
		if(pos[val-1]>pos[val])count++;
	}
	while(m--){
		int i,j; cin>>i>>j;
		i--,j--;

		int a=arr[i],b=arr[j];

		set<pair<int,int>>s;
		if(a>1)s.insert({a-1,a});
		if(a<n)s.insert({a,a+1});
		if(b>1)s.insert({b-1,b});
		if(b<n)s.insert({b,b+1});

		for(auto [x1,x2]:s){
			if(pos[x1]>pos[x2])count--;
		}

		swap(arr[i],arr[j]);
		swap(pos[a],pos[b]);

		for(auto [x1,x2]:s){
			if(pos[x1]>pos[x2])count++;
		}
		cout<<count<<endl;
	}
}
int main() {
	solve();
	return 0;
}
