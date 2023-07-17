#include <iostream>
using namespace std;
 
int main()
{
  int n, kol=0, max=0;
  cin>>n;
  int *a = new int [2*n];
  for (int i=0; i<n; i++) 
  {
      cin>>a[i];
      a[i+n]=a[i];
  }
  for (int i=0; i<2*n; i++)
  {
      if (a[i]==1) kol++;
      else
        if (kol>max) {max=kol; kol=0;}
        else kol=0;
  }
  cout<<max;
}
