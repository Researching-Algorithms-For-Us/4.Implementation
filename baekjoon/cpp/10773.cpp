#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<int> money;

	int K;
	cin >> K;

	while (K--)
	{
		int val;
		cin >> val;

		if (val == 0)
		{
			money.pop();
		}
		else
		{
			money.push(val);
		}
	}

	int sum = 0;
	while (!money.empty())
	{
		sum += money.top();
		money.pop();
	}

	cout << sum << "\n";

	return 0;
}
