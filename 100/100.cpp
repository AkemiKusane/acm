#include <iostream>
#include <climits>

using namespace std;

int qq(int a)
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
	}
	return q;
}


	int main()
	{
		
		int a, b;
		while (cin >> a >> b)
		{
			
			int q = INT_MIN;
			int c, d;
			
			if (a > b)
			{
				c = b;
				d = a;
			}
			else
			{
				c = a;
				d = b;
			}

			for (int i = c; i <= d; ++i)
			{
				if (qq(i) >= q)
				{
					q = qq(i);
				}
			}
			cout << a;
			cout << ' ';
			cout << b;
			cout << ' ';
			cout << q;
			cout << endl;
		}
		return 0;
	}