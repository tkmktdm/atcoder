#include<bits/stdc++.h>
using namespace std;

long long n,k,l;
long long a[1<<18];

bool solve(long long m){
  long long cnt = 0, pre = 0;
  for (int i=1; i<=n; i++){
    if(a[i]-pre >=m && l-a[i] >=m){
      cnt += 1;
      pre = a[i];
    }
  }
  if (cnt >= k) return true;
  return false;
}

int main() {
  cin>>l>>n>>k;
  for (int i=1; i<=n; i++) {
    cin>>a[i];
  }

  long long left = -1;
  long long right = l+1;
  while (right - left >1) {
    long long mid = left + (right - left) / 2;
    if (solve(mid) == false) right = mid;
    else left = mid;
    cout<<left<<mid<<right<<endl;
  }
  cout<<left<<endl;
  return 0;
}
