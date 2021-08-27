#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> v, answer;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int num; cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		answer.push_back(v[0]);
		v.clear();
	}
	sort(answer.begin(), answer.end(), greater<>());

	cout << answer[0] << '\n';

}
