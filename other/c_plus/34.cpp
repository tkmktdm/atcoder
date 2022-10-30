#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n;
  vector<int> a(n);
  int al=0;
  for(int i{0}; i<n; ++i){
    cin>>al;
    a.push_back(al);
  }
  cin>>k;
  int ans = k;
  vector<int> a_r(a.rbegin(), a.rend());

  for(int i=0; i<n; i++){
    if (a_r[i]<=k && ans>0){
      ans = ans-a_r[i];
    }
  }
  if (ans==0){
    cout<<"Yes"<<endl;
  } else {
    cout<<"No"<<endl;
  }
}
