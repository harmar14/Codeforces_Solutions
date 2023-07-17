#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, s=0, c, nch=0, ch=0, kol=0;
    cin>>n;
    int* a = new int [n];
    for (int i=0; i<n; i++) 
    {
        cin>>a[i];
        if (a[i]%2==1) nch++;
        else ch++;
    }
    if (nch>ch) {kol=2*ch+1; c=1;}
    else if (ch>nch) {kol=2*nch+1; c=0;}
    else if (nch==ch) kol=nch+ch;
    if (kol==n) s=0;
    else 
    {
        sort(a, a+n);
        for (int i=0; i<kol; i++)
        {
            int j=n-1;
            while(a[j]%2!=c || a[j]==-1) j--;
            a[j]=-1;
            if (c==1) c=0; else c=1;
        }
        for (int i=0; i<n; i++) if(a[i]!=-1) s+=a[i]; 
    }
    cout<<s;
}
