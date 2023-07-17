#include <iostream>
using namespace std;
 
int main()
{
	int n, m, k;
	cin >> n >> m;
	k = 1;
	while (n != 0)
	{
		if (k % m == 0) n++;
		n--;
		k++;
	}
	cout << --k;
	cin.get(); cin.get();
    return 0;
}
