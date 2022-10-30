#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin>>n>>k;
  vector<int> d(k);
  
  for (int i=0; i<k; i++) {
    cin>>d.at(i);
  }
  vector<int> number;
  for (int i=0; i<10; i++) {
    for (int m=0; m<k; m++) {
      if (d.at(m) != i) {
        number.push_back(i);
      }
    }
  }
  int top;
  int maxi = log10(n);
  int maxn = n.
  // 最上位桁は使わない数字の中で0以上

  if (number.at(0) !=0) {
    top = number.at(0);
  } else {
    top = number.at(1);
  }
  // 最上位桁以外は使わない数字の中で最も小さい数字
  // countDigits(n)
  // n以上であること
}
