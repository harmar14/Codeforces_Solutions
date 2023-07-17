#include <iostream>
using namespace std;
 
int main()
{
	int k, n, sum;
	cin >> k;
	int *res = new int[k];
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		int *a = new int[n];
		int *kol = new int[n];
		for (int g = 0; g < n; g++) kol[g] = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
			kol[a[j]-1]++;
		}
		sum = kol[n-1];
		int j = n;
		while (sum < j)
		{
			sum += kol[j-2];
			j--;
		}
		res[i] = j;
	}
	for (int i = 0; i < k; i++) cout << res[i] << endl;
    return 0;
}
