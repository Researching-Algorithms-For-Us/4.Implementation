#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int64_t A, B, C;
	cin >> A >> B >> C;

	if (C - B <= 0)
		cout << "-1\n";
	else
	{
		int64_t Point = A / (C - B);
		cout << Point + 1 << "\n";
	}

	return 0;
}
