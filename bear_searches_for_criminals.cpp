#include <iostream>
using namespace std;
 
int main()
{
  int n, k, max=0, r=0;
  cin>>n;
  cin>>k;
  k--;
  int *a = new int [n];
  for (int i=0; i<n; i++) cin>>a[i];
  if (n-1-k>k) r=n-1-k;
  else r=k;
  for (int i=0; i<=r; i++)
  {
      if (i==0 && a[k]==1) max++;
      else if (k-i<0 && a[k+i]==1) max++;
      else if (k+i>=n && a[k-i]==1) max++;
      else if (a[k-i]==1 && a[k+i]==1) max+=2;   
  }
  cout<<max;
}
