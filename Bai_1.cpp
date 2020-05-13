/*Link:https://atcoder.jp/contests/abc167/tasks/abc167_d*/
#include<bits/stdc++.h>
using namespace std;
#define maxn 200005
vector<int> a(maxn),vis(maxn,-1);
long long i,j,n,k,cur,num,l;
int main(){
  cin>>n>>k;
  for(i=0;i<n;i++) cin>>a[i],a[i]-=1;
  while(vis[cur]==-1&&num<k){
    vis[cur]=num;cur=a[cur];num++;
  }
  k-=vis[cur];l=num-vis[cur];
  for(i=0;i<k%l;i++) cur=a[cur];
  cout<<cur+1;
  return 0;
}
