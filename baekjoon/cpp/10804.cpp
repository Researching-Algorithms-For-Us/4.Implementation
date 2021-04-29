#include <bits/stdc++.h>
using namespace std;
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void print(vector<int32_t>& Card)
{
	for (int i = 1; i < 21; ++i)
	{
		cout << Card[i] << " ";
	}

	cout << "\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int32_t> Card;
	Card.resize(21);

	for (int i = 0; i < 21; ++i)
	{
		Card[i] = i;
	}

	int Left, Right;
	for (int i = 0; i < 10; ++i)
	{
		cin >> Left >> Right;

		if (abs(Left - Right) == 0)
			continue;

		for (;Left < Right; Left++, Right--)
		{
			Swap(Card[Left], Card[Right]);
		}
	}

	print(Card);


	return 0;
}