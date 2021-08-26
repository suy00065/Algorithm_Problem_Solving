#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int sum = 0, N = 2750;

	for (int i = 500; i >= 10;) {
		if (N / i > 0) {
			sum += N / i;
			N = N - (N / i) * i;
		}

		if (i == 500 || i == 50)
			i /= 5;
		else
			i /= 2;
	}

	cout << sum << '\n';
}
