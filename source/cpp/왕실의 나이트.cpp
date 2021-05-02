#include <bits/stdc++.h>
using namespace std;
bool MoveUpRight(int X, int Y)
{
    if (Y >= 2 && X <= 6)
    {
        return true;
    }
    
    return false;
}
bool MoveUpLeft(int X, int Y)
{
    if (Y >= 2 && X >= 1)
    {
        return true;
    }

    return false;
}
bool MoveRightUp(int X, int Y)
{
    if (X <= 5 && Y >= 1)
    {
        return true;
    }

    return false;
}
bool MoveRightDown(int X, int Y)
{
    if (X <= 5 && Y <= 6)
    {
        return true;
    }

    return false;
}
bool MoveLeftUp(int X, int Y)
{
    if (X >= 2 && Y >= 1)
    {
        return true;
    }

    return false;
}
bool MoveLeftDown(int X, int Y)
{
    if (X >= 2 && Y <= 6)
    {
        return true;
    }

    return false;
}
bool MoveDownRight(int X, int Y)
{
    if (Y <= 5 && X <= 6)
    {
        return true;
    }

    return false;
}
bool MoveDownLeft(int X, int Y)
{
    if (Y <= 5 && X >= 1)
    {
        return true;
    }

    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string pos;
    cin >> pos;

    int Xpos = pos[0] - 'a', Ypos = pos[1] - '1';
    int ans = 0;

    if (MoveUpRight(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveUpLeft(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveRightUp(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveRightDown(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveLeftUp(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveLeftDown(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveDownRight(Xpos, Ypos))
    {
        ans++;
    }
    if (MoveDownLeft(Xpos, Ypos))
    {
        ans++;
    }

    cout << ans << endl;
  


    return 0;
}
