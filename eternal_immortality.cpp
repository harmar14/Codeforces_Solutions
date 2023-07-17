#include <iostream>
 
using namespace std;
 
int main()
{
    long long a, b, p=1;
    cin>>a>>b;
    if (b-a>=9) p=0;
    else
        for (long long i=a+1; i<=b; i++)
        {
            int c = i % 10;
            p*=c;
            p%=10;
        }
    cout<<p;
}
