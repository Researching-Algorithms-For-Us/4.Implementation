#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    queue<int> commandQueue;

    int TestCase;
    cin >> TestCase;
    int a;
    while (TestCase--)
    {
        string command;
        cin >> command;

        if (command.compare("push") == 0)
        {
            cin >> a;

            commandQueue.push(a);
        }
        else if (command.compare("pop") == 0)
        {
            if (!commandQueue.empty())
            {
                int t = commandQueue.front();
                commandQueue.pop();
                cout << t << "\n";
            }
            else
                cout << "-1\n";
        }
        else if (command.compare("size") == 0)
        {
            cout << commandQueue.size() << "\n";
        }
        else if (command.compare("empty") == 0)
        {
            cout << commandQueue.empty() << "\n";
        }
        else if (command.compare("front") == 0)
        {
            if (commandQueue.empty())
            {
                cout << "-1\n";
            }
            else
                cout << commandQueue.front() << "\n";
        }
        else if (command.compare("back") == 0)
        {
            if (commandQueue.empty())
            {
                cout << "-1\n";
            }
            else
                cout << commandQueue.back() << "\n";
        }
    }


    return 0;
}
