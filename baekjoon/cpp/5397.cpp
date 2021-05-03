#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int TestCase;
	cin >> TestCase;

	while (TestCase--)
	{
		list<char> editor;
		string keyboard;
		cin >> keyboard;

		auto cursor = editor.end();

		for (auto command : keyboard)
		{
			switch (command)
			{
			case '<':
				if (cursor == editor.begin())
					continue;

				cursor--;
				break;
			case '>':
				if(cursor == editor.end())
					continue;

				cursor++;
				break;
			case '-':
				if (cursor == editor.begin())
					continue;

				cursor = editor.erase(--cursor);
				break;
			default:
				cursor = editor.insert(cursor, command);
				cursor++;
				break;
			}
		}

		for (auto c : editor)
		{
			cout << c;
		}
		cout << "\n";
	}

	return 0;
}
