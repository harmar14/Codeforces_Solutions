#include <iostream>
#include <map>
 
using namespace std;
int main()
{
	long long sum = 0;
 
	map <long, long> myMap;
	map <long, long>::iterator it;
	long n, x, y;
	cin >> n;
 
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		myMap.insert(pair<long, long>(x, y));
		sum += y;
	}
 
	cin >> n;
 
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
 
		it = myMap.find(x);
			if (it != myMap.end())
			{
				if (it->second < y)
				{
					sum += (y - it->second);
					it->second = y;
				}
			}
			else
			{
				myMap.insert(pair<long, long>(x, y));
				sum += y;
			}
	}
	cout << sum;
	return 0;
}
