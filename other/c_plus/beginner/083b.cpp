#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int calculation(int i)
{
  int sum_k = 0;
  int low = i;

  while (low) {
    sum_k += low % 10;
    low = low / 10;
  }
  return sum_k;
}

int main()
{
  int n, a, b;
  cin>>n>>a>>b;
  int ans = 0;
  int result;
  for(int i = 1; i<=n; i++)
  {
    result = calculation(i);
    
    if(a<=result && result<=b) {
      ans+=i;
    }
  }
  cout<<ans<<endl;
}
