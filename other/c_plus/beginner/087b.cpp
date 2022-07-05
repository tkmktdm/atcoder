#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,x;
  int ans=0;
  cin>>a>>b>>c>>x;
  for(int i=0; i<=a; i++) {
    for(int k=0; k<=b; k++) {
      for(int m=0; m<=c; m++) {
        if(x==(i*500)+(k*100)+(m*50)) {
          ans++;
        }
      }
    }
  }
  cout<<ans<<endl;
}
