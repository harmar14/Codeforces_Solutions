#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    long s=0, h0=0;
    cin>>n;
    int* h = new int[n];
    for (int i=0; i<n; i++) cin>>h[i];
    for (int i=0; i<n-1; i++)
    {
        s+=h[i]-h0+1;
        if (h[i+1]<h[i])
        {
            h0=h[i+1];
            s+=h[i]-h0;
        }
        else h0=h[i];
        s++;
    }
    s+=h[n-1]-h0+1;
    cout<<s;
}
