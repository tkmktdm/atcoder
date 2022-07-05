#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans=0;
  vector<int> a(n);
  for (int i = 0; i<n; i++) {
    cin>>a[i];
  }
  while (true) {
    int count=0;
    for (int i = 0; i < a.size(); i++) {
      if (a[i] % 2 == 0) {
        a[i] = a[i] / 2;
        count++;
      }
    }
    if (count != a.size()) {
      break;
    } else {
      ans++;
    }
  }
  cout<<ans<<endl;
}
