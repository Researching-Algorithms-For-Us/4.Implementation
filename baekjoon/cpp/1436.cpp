#include <bits/stdc++.h>
using namespace std;
bool isDeathNumber(int a)
{
	if (to_string(a).find("666") == std::string::npos)
		return false;

	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string Token = "666";

	int n = 0;
	cin >> n;

	int i = 666;
	int ans = 0;
	for (; n>0; i++)
	{
		if (isDeathNumber(i))
		{
			n--;
			if (n == 0)
				ans = i;
		}
	}

	cout << ans << "\n";

	return 0;
}
