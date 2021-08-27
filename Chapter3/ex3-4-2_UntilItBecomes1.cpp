#include <iostream>
using namespace std;

int main()
{
	int n, k, cnt = 0, target; cin >> n >> k;

	while (n > 1) {
		target = (n / k) * k;
		cnt += n - target;

		n = target;
		cnt++;
		n /= k;
	}

	cnt += (n - 1);
	cout << cnt << '\n';
}
