#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin>>a.at(i);
  }
  
  int x;
  vector ans = a;
  sort(ans.begin(), ans.end());
  for(int i=0; i<n; i++) {
    //std::cout << i << n << (k-1) << std::endl;
    //std::cout << n-(k-1) << std::endl;
    if(i<n-(k-1)) {
      if(a[i] >= a[i+k] && a[i+k] != 0) {
        std::cout << i+k << std::endl;
        x = a[i];
        a[i] = a[i+k];
        a[i+k] = x;
        //std::cout << a[i] << a[i+k] << std::endl;
      }
    } else {
      break;
    }
  }
  for(int i=0; i<n; i++) {
    std::cout << a[i] << std::endl;
  }
  if(a == ans) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
