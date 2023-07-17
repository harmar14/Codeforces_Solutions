#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main()
{
  int n, m1=0, m2=0, num=-1, a[4][4];
  cin>>n;
  for (int i=0; i<4; i++)
    for (int j=0; j<4; j++) cin>>a[i][j];
  for (int i=0; i<4; i++)
  {
      if (a[i][0]+a[i][2]<=n) {m1=a[i][0]; m2=a[i][2]; num=i+1;}
      else if (a[i][0]+a[i][3]<=n) {m1=a[i][0]; m2=a[i][3]; num=i+1;}
      else if (a[i][1]+a[i][3]<=n) {m1=a[i][1]; m2=a[i][3]; num=i+1;}
      else if (a[i][1]+a[i][2]<=n) {m1=a[i][1]; m2=a[i][2]; num=i+1;}
  }
  if (num==-1) cout<<-1;
  else 
  {
      if (m1+m2<n) m2=n-m1;
      cout<<num<<" "<<m1<<" "<<m2;
  }
}
