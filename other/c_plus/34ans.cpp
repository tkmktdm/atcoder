#include<bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void solve(){
  string s;
  cin>>s;
  int n = s.size() -1;
  ll ans = 0;
  for (ll i=0; i< 1 << n; i++){
    // i=0,1,2,3;
    ll a = s[0] - '0';
        //cout<<"a:"<<a<<endl;
    //cout<<a<<s[0]<<endl; a=1,1,1,1;
    for (int j=0; j<n; j++){
      if(i>>j&1){
        //cout<<(i>>j&1)<<i<<j<<endl;
        //cout<<j<<endl j=0,1,0,1
        
        //cout<<"j:"<<j<<endl;
        cout<<"if:"<<a<<endl;
        ans+=a;
        cout<<"ACTION_IF:"<<ans<<":"<<a<<endl;
        a = s[j+1]-'0';
      } else {
        cout<<"else:"<<a<<endl;
        // 桁を十倍して次の桁を取りに行く
        a = 10*a+s[j+1]-'0';
        cout<<"else:"<<a<<endl;
      }
    }
    cout<<"ACTION:"<<ans<<":"<<a<<endl;
    ans += a;
  }
  cout<<ans<<endl;
}

int main() {
  solve();
  return 0;
}
