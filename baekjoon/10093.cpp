/*
	틀린 이유 :
		A, B가 같을때 출력이 이상했음.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	uint64_t A, B;
	cin >> A >> B;

	if (A == B)
	{
		cout << "0\n";
	}
	else if (A > B)
	{
		uint64_t Sub = A - B - 1;
		cout << Sub << "\n";
		for (auto i = B + 1; i < A; ++i)
		{
			cout << i << " ";
		}
	}
	else
	{
		uint64_t Sub = B - A - 1;
		cout << Sub << "\n";
		for (auto i = A + 1; i < B; ++i)
		{
			cout << i << " ";
		}
	}

	return 0;
}