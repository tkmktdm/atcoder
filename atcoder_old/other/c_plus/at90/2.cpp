#include<bits/stdc++.h>
using namespace std;

string binaryTrans(int num){
  string r;
  while (num != 0) {
    r += (num%2 == 0 ? "0" : "1");
    num /= 2;
    cout<<num<<endl;

  }
  return r;
}

int main(){
  /*
  string s;
  cin>>s;
  int n = s.length();
  int cn = 0;
  for (int i=0; i<n; i++) {
    if(cn >= 0){
      if(s[i] == '('){
        cn+=1;
      } else if(s[i] == ')') {
        cn-=1;
      } else {
        printf("NG");
        return 0;
      }
    } else {
      printf("NG");
      return 0;
    }
  }
  if(cn == 0){
    printf("OK");
  } else {
    printf("NG");
  }
  return 0;
*/
  // n個のカッコを使った時にどんなカッコの表現になるか。n=3の時、(((, ((),など色々ある。
  double n;
  cin>>n;
  double count = pow(2, n);

  string b;
  for (int i=0; i<count; i++) {
    b = binaryTrans(i);
    cout<<i<<":"<<endl;

  }



}

