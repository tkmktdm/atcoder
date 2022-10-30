#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,y;
  cin>>n>>y;
  int m;
  y = y/1000;
  for(int i=0; i<=n; i++) {
    for(int k=0; k<=n; k++) {
      m = n - (i + k);
      if(i*10+k*5+m == y && m>=0 &&(i+k+m) == n) {
        cout<<i<<" "<<k<<" "<<m<<endl;
        return 0;
      }
    }
  }
  cout<<"-1 -1 -1"<<endl;
}
