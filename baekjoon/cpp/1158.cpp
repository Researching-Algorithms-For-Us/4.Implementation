#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	
	list<int> table;
	vector<int> history;

	for (int i = 0; i < N; ++i)
	{
		table.push_back(i + 1);
	}
	
	auto cursor = table.begin();
	bool first = true;
	while (!table.empty())
	{
		int count = first ? K - 1 : K;
		for (int i = 0; i < count; ++i)
		{
			cursor++;

			if (cursor == table.end())
				cursor = table.begin();
		}

		// 아 디버그 코드 안지워서 틀림...
		history.push_back(*cursor);
		cursor = table.erase(cursor);

		if (cursor == table.end())
			cursor = table.begin();
	}

	cout << "<";
	for (auto iter = history.begin(); iter != history.end(); ++iter)
	{
		cout << *iter;

		auto tempiter = iter;
		if (++tempiter != history.end())
		{
			cout << ", ";
		}
	}

	cout << ">";




	return 0;
}
