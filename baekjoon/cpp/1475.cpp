#include <bits/stdc++.h>
using namespace std;
int Set[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1 };
int Setcount[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);


	std::string roomnumber;
	cin >> roomnumber;

	for (char c : roomnumber)
	{
		if (c == '9')
			c = '6';

		Setcount[c - '0']++;
	}

	int count = 0;
	for (int i = 0; i < 9; ++i)
	{
		count = std::max(count, Setcount[i] / Set[i] + (Setcount[i] % Set[i] > 0 ? 1 : 0));
	}

	cout << count << '\n';


	return 0;
}
