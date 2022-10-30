#include <algorithm>
#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
using namespace std;
int total(int i, int k) {
  int s = i*2;
  int counter = 1;
  while(s < k) {
    s = s*2;
    counter++;
  }
  return counter;
}

int lcm_s(int i, int m) {
  int l = lcm(i, m);
  return l;
}

int main(){
  int n,k;
  cin>>n>>k;
  int c = 0;
  int ans[n];
  for(int i=1; i<=n; i++) {
    c = total(i, k);
    ans[i-1] = (n*pow(2, c));
  }
  int max_int = max(ans[0], ans[n-1]);
  int a = max_int;
  double out = 0;

  for(int i=0; i<n; i++){
    out += a/(ans[i]);
    a = lcm_s(a, ans[i]);
  }
  cout<<out<<max_int<<endl;
  float aaa = out/max_int;
  //std::cout << fixed << setprecision(12) <<aaa << std::endl;
  printf("%.12f",out/max_int);
  //int a = lcm(48, lcm(24,12));
  //printf("%.12f", ans);
}
