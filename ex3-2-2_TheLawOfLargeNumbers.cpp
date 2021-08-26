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

	int first = v[0];
	int second = v[1];

	int count = m / (k + 1) * k;
	count += m % (k + 1);

	sum += count * first;
	sum += (m - count) * second;

	cout << sum << '\n';
}
