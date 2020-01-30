#include <iostream>
#include <climits>

using namespace std;

int calc(long long a, int limit)
{
	int q = 1;
	while(a!=1)
	{
		if (a % 2 == 0)
		{
			a = a / 2;
		}
		else
		{
			a = (3 * a) + 1;
		}
		q++;
		if (a > limit)
		{
			q--;
			break;
		}
	}
	return q;
}


	int main()
	{
		
		long long a;
		int lim;
		int turns = 1;
		while (cin >> a >> lim)
		{
			if (a<0|| lim<0)
				break;
			int q = INT_MIN;

			cout << "Case " << turns << ": A = " << a << ", limit = " << lim << ", number of terms = " << calc(a, lim) << endl;
			turns++;
		}
		return 0;
	}