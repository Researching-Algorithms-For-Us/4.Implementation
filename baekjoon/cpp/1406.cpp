#include <bits/stdc++.h>
using namespace std;
list<char> editor;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	std::string str;
	cin >> str;

	for (char c : str)
	{
		editor.push_back(c);
	}
	
	auto cursor = editor.end();

	int TestCase;
	cin >> TestCase;

	while (TestCase--)
	{
		char command;
		char insertcharacter;

		cin >> command;

		switch (command)
		{
		case 'L':
			if (cursor == editor.begin())
				continue;

			cursor--;
			break;
		case 'D':
			if (cursor == editor.end())
				continue;

			cursor++;
			break;
		case 'B':
			if (cursor == editor.begin())
				continue;

			cursor--;
			cursor = editor.erase(cursor);
			break;
		case 'P':
			cin >> insertcharacter;

			cursor = editor.insert(cursor, insertcharacter);
			cursor++;
			break;
		}
	}

	for (auto c : editor)
	{
		cout << c;
	}
	cout << "\n";

	return 0;
}
