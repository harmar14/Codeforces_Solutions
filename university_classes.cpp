#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, max=0;
	string s;
	cin >> n;
	int k[7] = { 0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < 7; j++)
			if (s[j] == '1') k[j]++;
	}
	for (int i = 0; i < 7; i++)
		if (k[i]>max) max = k[i];
	cout << max;
    return 0;
}
