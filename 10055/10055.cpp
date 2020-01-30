#include <iostream>
#include <climits>

using namespace std;


	int main()
	{
		
		long long a, b;
		while (cin >> a >> b)
		{
			long long q = 0;
			long long  c;
			if (a < b)
			{
				c = a;
				a = b;
				b = c;
			}

			q = a - b;
			cout << q;
			cout << endl;
		}
		return 0;
	}