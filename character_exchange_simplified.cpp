#include <iostream>
using namespace std;

int main()
{
	int k, n, kol, i1, j1;
	cin >> k;
	int *res = new int[k];
	for (int i = 0; i < k; i++)
	{
		kol = 0; i1 = -1; j1 = -1;
		cin >> n;
		char *s = new char[n];
		char *t = new char[n];
		for (int j = 0; j < n; j++) cin >> s[j];
		for (int j = 0; j < n; j++)
		{
			cin >> t[j];
			if (t[j] != s[j]) kol++;
		}
		if (kol != 2) res[i] = 0;
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (t[j] != s[j] && i1 == -1) i1 = j;
				else if (t[j] != s[j]) j1 = j;
			}
			if (t[i1] == t[j1] && s[i1] == s[j1]) res[i] = 1;
			else res[i] = 0;
		}
	}
	for (int i = 0; i < k; i++)
		if (res[i] == 0) cout << "No" << endl;
		else cout << "Yes" << endl;
    return 0;
}
