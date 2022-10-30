#include<bits/stdc++.h>
using namespace std;

bool dfs(int i, int sum) {
  if(i==n) return sum == k;
  if(dfs(i+1, sum)) return true;
  if(dfs(i+1, sum+a[i])) return true;
  return false;

}

int main()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  for (int i=0; i<=n; i++)
  {
    cin>>a[i];
  }
  if(dfs(0,0)) printf("Yes\n");
  else printf("No\n");
  
}
