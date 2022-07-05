#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  //s[k-1]=tolower(s[k-1]);
  //transform(s.cbegin(), s.cend(), s[k], tolower);
  s[k-1] = tolower(s[k-1]);
  cout<<s<<endl;
}
