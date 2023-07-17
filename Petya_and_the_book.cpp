#include <iostream>
using namespace std;

int main()
{
	int str, v[7], sum=0;
	cin >> str;
	for (int i = 0; i < 7; i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	str = str % sum + sum;
	int i = 0;
	while (str > 0)
	{
		str -= v[i];
		i++;
		if (i == 7) i = 0;
	}
	if (i == 0) i = 7;
	cout << i;
    return 0;
}
