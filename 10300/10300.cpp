#include <iostream>

using namespace std;

long long cp(long long size, long long animal, long long env)
{
	return size*env;
}

int main()
{
		
	int a, b, c;
	int outerRound;
	cin >> outerRound;
	for(int i=0; i<outerRound; i++)
	{
		int innerRound;
		cin >> innerRound;
		long long q=0;
		for (int j = 0; j < innerRound; j++)
		{
			cin >> a >> b >> c;
			q = q+cp(a, b, c);
		}
		cout << q;
		cout << endl;
	}
	return 0;
}