#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
	string s;
	char x;
	int n, a=0, c=0, g=0, t=0, er=0;
	cin >> n;
	if (n % 4 != 0) er = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 'A') a++;
		else if (x == 'C') c++;
		else if (x == 'G') g++;
		else if (x == 'T') t++;
		s += x;
	}
	if (a > n / 4 || c > n / 4 || g > n / 4 || t > n / 4) er = -1;
	if (er == -1) cout << "===";
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='?') 
				if (n / 4 - a > 0) { s[i] = 'A'; a++; }
				else if (n / 4 - c > 0) { s[i] = 'C'; c++; }
				else if (n / 4 - g > 0) { s[i] = 'G'; g++; }
				else if (n / 4 - t > 0) { s[i] = 'T'; t++; }
		}
		cout << s;
	}
    return 0;
}
