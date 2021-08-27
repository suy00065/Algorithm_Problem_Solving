#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int n, cnt = 0, flag = 0; cin >> n;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	while (true) {
		int Groupsize = v[0];

		if (Groupsize <= v.size()) {
			for (int i = 0; i < Groupsize; i++) {
				if (v[0] < v[i]) {
					flag = 1;
					break;
				}
			}
		}
		else
			flag = 1;

		if (flag == 1) break;

		for (int i = 0; i < Groupsize; i++)
			v.erase(v.begin());

		cnt++;
	}

	cout << cnt << '\n';
}
