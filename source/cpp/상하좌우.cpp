#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int startX = 1, startY = 1; 
    int N;

    cin >> N;
    char move;
    while (cin >> move)
    {
        if (cin.eof())
            break;

        switch (move)
        {
        case 'L':
            if (startX > 1)
            {
                startX--;
            }
            break;
        case 'R':
            if (startX <= N)
            {
                startX++;
            }
            break;
        case 'U':
            if (startY > 1)
            {
                startY--;
            }
            break;
        case 'D':
            if (startY <= N)
            {
                startY++;
            }
            break;
        }
    }

    cout << startY << " " << startX << endl;


    return 0;
}
