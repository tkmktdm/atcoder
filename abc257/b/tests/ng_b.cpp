#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n,k,q;
  cin>>n>>k>>q;
  int a[k], l[q];
  for(int i=0; i<=k-1; i++) {
    cin>>a[i];
  }
  for(int i=0; i<=q-1; i++) {
    cin>>l[i];
  }

  int n_list[n];
  for(int i=0; i<=n-1; i++) {
    n_list[i] = 0;
  }
  
  for(int i=0; i<=k-1; i++) {
    n_list[i] = a[i];
  }
  
  //for(int i=0; i<=n-1; i++) {
  //  cout<<n_list[i]<<endl;
  //}

  for(int i=0; i<q; i++) {
    if(n_list[l[i]] == 0) {
      //std::cout << n_list[l[i]] << std::endl;
      //std::cout << n_list[l[i]-1] << std::endl;
      std::cout << n_list[l[i]-1] << l[i]-1 << n_list[2] << std::endl;
      n_list[l[i]] = n_list[l[i]-1];
      n_list[l[i]-1] = 0;

      //for(int z=0; z<=q; z++) {
      //  cout<<n_list[z]<<endl;
      //}
    }
  }
  for(int i=0; i<=q; i++) {
    cout<<n_list[i]<<endl;
  }

}
