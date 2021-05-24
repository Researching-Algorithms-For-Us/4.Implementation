#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> s;
	s.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}

	vector<bool> v(n - 3, false);
	v.insert(v.end(), 3, true);

	int answer = 0;
	do {
		int temp = 0;
		for (int k = 0; k < n; k++) {
			if (v[k])
				temp += s[k];
		}

		if (temp <= m)
		{
			answer = max(answer, temp);
		}
	} while (next_permutation(v.begin(), v.end()));
	

	cout << answer << "\n";

	return 0;
}
