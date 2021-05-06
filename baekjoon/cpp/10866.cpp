#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    deque<int> deq;

    int N;
    cin >> N;
    string str;
    int X;
    while (N--)
    {
        cin >> str;

        if (str.compare("push_front") == 0)
        {
            cin >> X;
            deq.push_front(X);
        }
        else if (str.compare("push_back") == 0)
        {
            cin >> X;
            deq.push_back(X);
        }
        else if (str.compare("pop_front") == 0)
        {
            if (deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                X = deq.front();
                deq.pop_front();

                cout << X << "\n";
            }
        }
        else if (str.compare("pop_back") == 0)
        {
            if (deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                X = deq.back();
                deq.pop_back();

                cout << X << "\n";
            }
        }
        else if (str.compare("size") == 0)
        {
            cout << deq.size() << "\n";
        }
        else if (str.compare("empty") == 0)
        {
            cout << deq.empty() << "\n";
        }
        else if (str.compare("front") == 0)
        {
            if (deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                X = deq.front();

                cout << X << "\n";
            }
        }
        else if (str.compare("back") == 0)
        {
            if (deq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                X = deq.back();

                cout << X << "\n";
            }
        }
    }


    return 0;
}
