#include <iostream>
using namespace std;

int main()
{
	int n, k, cnt = 0; cin >> n >> k;

	while (n > 1) {
		if (n % k != 0)
			n -= 1;
		else
			n /= k;
		cnt++;
	}

	cout << cnt << '\n';
}
