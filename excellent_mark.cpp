#include <iostream>
using namespace std;
 
int main()
{
	int n, m, changes=0;
	int k[4] = { 0, 0, 0, 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m == 2) k[0]++;
		else if (m == 3) k[1]++;
		else if (m == 4) k[2]++;
		else k[3]++;
	}
	while (((k[0] * 2 + k[1] * 3 + k[2] * 4 + k[3] * 5) / (float)n) < 4.5 && k[0]>0)
	{
		changes++;
		k[3]++;
		k[0]--;
	}
	while (((k[0] * 2 + k[1] * 3 + k[2] * 4 + k[3] * 5) / (float)n) < 4.5 && k[1]>0)
	{
		changes++;
		k[3]++;
		k[1]--;
	}
	while (((k[0] * 2 + k[1] * 3 + k[2] * 4 + k[3] * 5) / (float)n) < 4.5 && k[2]>0)
	{
		changes++;
		k[3]++;
		k[2]--;
	}
	cout << changes;
    return 0;
}
