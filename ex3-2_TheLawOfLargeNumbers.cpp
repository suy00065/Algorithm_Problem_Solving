#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, k, sum = 0, j = 1;
	vector<int> v;

	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < m; i++) {

		if (j <= k)
			sum += v[0];
		else if (j == k + 1) {
			sum += v[1];
			j = 0;
		}

		j++;
	}

	cout << sum << '\n';
}
