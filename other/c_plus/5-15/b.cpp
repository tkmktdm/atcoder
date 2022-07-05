#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin>>n;
  cin>>s;
  string ss;
  string newword;
  int count = 1;
  int check = 0;
  string word = "ARC";
  for(int i=0; i<=6; i++) {
    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
    if('A' == s[i] && 'R' ==s[i+1] && 'C' == s[i+2]) {
      if(i%2==1) {
        ss.append("R");
        check=3;
      } else {
        ss.append("AC");
        check=3;
      }
    } else {
      if(check==0) {
        ss+=(s[i]);
      } else {
        check-=1;
      }
    }
    cout<<ss<<endl;
  }
}
