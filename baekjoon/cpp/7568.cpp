#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<pair<int, int>> pairarr;
	pairarr.resize(N);

	for (int i = 0; i < N; ++i)
	{
		int x, y;
		cin >> x >> y;

		pairarr[i] = std::move(make_pair(x, y));
	}

	for (int i = 0; i < N; ++i)
	{
		int top = 1;
		for (int j = 0; j < N; ++j)
		{
			if (i == j)
				continue;

			auto& left = pairarr[i];
			auto& right = pairarr[j];

			if (left.first < right.first && left.second < right.second)
				top++;
		}

		cout << top << " ";
	}

^
	return 0;
}
