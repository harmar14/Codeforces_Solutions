#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    long long sum=0;
    cin>>n;
    long* a = new long [n];
    for (int i=0; i<n; i++) cin>>a[i];
    sum+=a[n-1];
    for (int i=1; i<n; i++)
    {
        if (a[n-i]>a[n-1-i]) sum+=a[n-1-i];
        else if (a[n-i]!=0) {sum+=a[n-i]-1; a[n-1-i]=a[n-i]-1;}
        else a[n-1-i]=0;
    }
    cout<<sum;
}
