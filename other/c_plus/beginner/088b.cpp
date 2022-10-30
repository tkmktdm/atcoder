#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  int n, alice=0, bob=0;
  int count = 0;
  cin>>n;
  vector<int>a(n);
  for (int i=0; i<n; i++) {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  for (int i=0; n>i; n--)
  {
    if(count%2==0) {
      alice+=a[n-1];
    } else {
      bob+=a[n-1];
    }
    count++;
  }
  cout<<alice-bob<<endl;
}
