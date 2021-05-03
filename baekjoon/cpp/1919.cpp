#include <bits/stdc++.h>
using namespace std;
int gLeft[30];
int gRight[30];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string Left;
	string Right;
	cin >> Left >> Right;

	for (auto c : Left)
	{
		gLeft[c - 'a']++;
	}

	for (auto c : Right)
	{
		gRight[c - 'a']++;
	}

	int CommonCharacters = 0;
	for (int i = 0; i < 30; ++i)
	{
		if (gLeft[i] > 0 && gRight[i] > 0)
		{
			CommonCharacters+= std::min(gLeft[i], gRight[i]);
		}
	}

	int ans = Left.length() - CommonCharacters + Right.length() - CommonCharacters;
	cout << ans << "\n";
	return 0;
}