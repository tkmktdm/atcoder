#include<bits/stdc++.h>
using namespace std;

bool binary_search(int x, int n, int k[]) {
  int l=0, r=n;
  while (r-l>=1) {
    int i=(l+r)/2;
    if(k[i]==x) return true;
    else if(k[i]<x) l=i+1;
    else r=i;
  }
  return false;
}

void solve() {
  int n,m;
  cin>>n>>m;
   int k[n];
  for(int i=0; i<n; i++) {
    cin>>k[i];
  }
  // cin>>k[i];の型がうまく指定できない
  //printf(typeid(k).name());
  //sort(k, k+n);
  //bool f = false;
  //for(int a=0; a<n; a++) {
    //for(int b=0; b<n; b++) {
      //for(int c=0; c<n; c++) {
        //if(binary_search((m-k[a]-k[b]-k[c]), n, k)) {
          //f=true;
        //}
      //}
    //}
  //}
  //if(f) printf("Yes\n");
  //else printf("No\n");
}
