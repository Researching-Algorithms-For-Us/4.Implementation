#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        stack<char> checker;
        string buffer;
        bool failed = false;
        bool isEnd = true;
        char c;

        getline(cin, buffer);

        for (auto c : buffer)
        {
            if (c == '.')
            {
                if (isEnd)
                {
                    return 0;
                }

                if (failed || checker.size() > 0)
                {
                    cout << "no\n";
                }
                else
                    cout << "yes\n";
                break;
            }
            else
            {
                isEnd = false;

                if (c == '(' || c == '[')
                {
                    checker.push(c);
                }
                else if (c == ')')
                {
                    if (checker.size() <= 0)
                    {
                        failed = true;
                    }
                    else if(checker.top() != '(')
                    {
                        failed = true;
                    }
                    else
                    {
                        checker.pop();
                    }
                }
                else if (c == ']')
                {
                    if (checker.size() <= 0)
                    {
                        failed = true;
                    }
                    else if (checker.top() != '[')
                    {
                        failed = true;
                    }
                    else
                    {
                        checker.pop();
                    }
                }

                if (failed)
                {
                    cout << "no\n";
                    break;
                }
            }
        }
    }

    return 0;
}
