#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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
// using namespace __gnu_pbds;

//-------Global Variables-------


//-----------functions------------
void displayArr(vector<int>v){
  for(auto &val:v){
    print(val);
  }next_line();
}
void displayMatrix(vector<vector<int>>A){
  for(int i=0;i<A.size();++i){
    for(int j=0;j<A[0].size();++j){
      print(A[i][j]);
    }next_line();
  }next_line();
}
void readInput(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  #endif
}

//-----------------
void solve(){
  //write code here...
}
int main(){
  readInput();
	inp1(t);
  // int t=1;
  while(t--){
    solve();
  }
}
