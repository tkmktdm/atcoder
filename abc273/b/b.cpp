#include<bits/stdc++.h>
using namespace std;

int main() {
  string x;
  int k;
  cin>>x;
  cin>>k;
  int length = x.size();
  string ans = "";
  int c = 0;

  if (length < k){
    cout<<0<<endl;
    return 0;
  }

  /**
  for(int i=0; i<k; i++) {
    char numc = x[length-i-1];
    
    int num = numc-'0';
    num = num+c;
    cout<<"num"<<num<<endl;
    if (num < 5) {
      c = 0;
      ans+="0";
    } else if (4<num && num<10) {
      c = 1;
      ans+="0";
    } else {
      c = 0;
      ans+="0";
    }
  }
  **/
  for (int i=0; i<length; i++) {
    if (i < k) {
      char numc = x[length-i-1];
      int num = numc-'0';
      num = num+c;
      cout<<"num"<<num<<endl;
      if (num < 5) {
        c = 0;
        ans+="0";
      } else if (4<num && num<10) {
         c = 1;
         ans+="0";
      } else {
        c = 0;
        ans+="0";
      }
      ans+=x[i];
    }
  }
  cout<<length<<endl;
  cout<<"anser:"<<x[length-k-1]<<":"<<ans<<endl;
}
