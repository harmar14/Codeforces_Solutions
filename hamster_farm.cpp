#include <iostream>
using namespace std;
 
int main()
{
  long long n, k, ost=0, num=1, kol;
  cin>>n>>k;
  long long* a = new long long [k];
  for (long long i=0; i<k; i++) cin>>a[i];
  ost = n % a[0];
  kol = n / a[0];
  for (long long i=0; i<k; i++)
    if (n % a[i]<ost) {ost=n % a[i]; kol=n / a[i]; num=i+1;}
  cout<<num<<" "<<kol;
}
