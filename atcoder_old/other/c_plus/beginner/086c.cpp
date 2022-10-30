#include<bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
  int n;
  cin>>n;
  // int t,x,y;
  int t[n],x[n],y[n];
  int ox, oy = 0;
  int pointer = 0;
  int time = 0;
  string ans = "";
  for(int i=0; i<n; i++) {
    cin>>t[i]>>x[i]>>y[i];
  }
   for(int i=0; i<n; i++) {
    // 自分より大きい数なら足し算、小さい数なら引き算、同じなら0
    // 上横方向の移動のみならば進んだ時のt%「x+yの値」と「前の値」の引き算でいい？
    // 未来の値から今の値を引く、今の値の方が大きい場合マイナスになるが、絶対値を取る。
    // x[i] - oldx;
    // y[i] - oldy;
    if ((t[i]-time) % (abs(x[i]-ox) + abs(y[i]-oy)) == 0) {
      ans="Yes";
      time = t[i];
      ox = x[i];
      oy = y[i];
    } else {
      ans="No";
      break;
    }
  }
   cout<<ans<<endl;
}
