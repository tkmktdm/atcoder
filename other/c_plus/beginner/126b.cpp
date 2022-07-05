#include<bits/stdc++.h>
#include <string>
using namespace std;
int main (){
  string s;
  cin>>s;

  int a = stoi(s.substr(0,2));
  int b = stoi(s.substr(2,2));
  bool ans[2]={0};

  for(int i=0; i<2; i++) {
    ans[i] = a >= 1 && a<=12;
    swap(a,b);
  }
  //条件の受け渡しに抜けがあった
  if(ans[0] && ans[1]) {
    cout << "AMBIGUOUS"<<endl;
  } else if(ans[0]) {
		cout << "MMYY"<<endl;
  } else if(ans[1]) {
		cout << "YYMM"<<endl;
  } else {
		cout << "NA"<<endl;
  }
}
