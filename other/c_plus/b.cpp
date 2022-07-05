#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;

  // koko確認
  vector a(n, vector<int>(n));
  for (int i=0; i<n; i++) {
    a[i] = vector<int>(i+1);
  }
  for (int i=0; i<n; i++) {
    for (int j=0; j<i; j++) {
      if(j==0 || i==j) a[i][j]=1;
      else {
        a[i][j] = a[i-1][j-1]+a[i-1][j];
      }
    }
  }
  for (int i=0; i<n; i++){
    for(int j=0; j<i; j++) {
      if(j!=0)cout<<' ';
      cout<<a[i][j];
    }
    cout<<endl;
  }
}
