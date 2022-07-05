#include<bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin>>s;
  int count=0;
  while (s) {
    count += s%10;
    s = s / 10;
  }
  cout<<count<<endl;

}
