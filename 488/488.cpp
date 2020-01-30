
#include <iostream>

using namespace std;

int main()
{
	int a;
	int ampl, freq;
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		cin >> ampl;
		cin >> freq;

		for (int j = 0; j < freq; ++j) {
			for (int k = 1; k <= ampl; ++k) {
				for (int l = 0; l < k; ++l) {
					cout << k;
				}
				cout << endl;
			}
			for (int k = ampl-1; k >0; --k) {
				for (int l = 0; l < k; ++l) {
					cout << k;
				}
				cout << endl;
			}
			if (j < freq-1)
				cout << endl;
		}
		if (i < a - 1)
			cout << endl;
	}
	return 0;
}
