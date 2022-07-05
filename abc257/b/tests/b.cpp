#include <algorithm>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n,k,q;
  cin>>n>>k>>q;
  int a[k], l[q];
  for(int i=0; i<=k; i++) {
    if(i == k) {
      a[i] = 0;
    } else {
      cin>>a[i];
    }
  }
  for(int i=0; i<=q-1; i++) {
    cin>>l[i];
  }
  
  for(int i=0; i<q; i++) {
      if (a[l[i]-1]<n) {
        if(a[l[i]] != 0){
          if(a[l[i]-1] < a[l[i]]-1) {
            a[l[i]-1] += 1;
          }
        } else {
          a[l[i]-1] += 1;
        }
      }
  }
  for(int i=0; i<=k-1; i++) {
    if (i != k-1) {
      cout << a[i] << " ";
    } else {
      cout << a[i] << endl;
    }
  }
}
