#include <bits/stdc++.h>
using namespace std;

int Map[51][51];
enum Directional : int
{
    North = 0,
    East,
    South,
    West
};

struct Pos
{
    int X;
    int Y;
    int direction;
};

Directional MoveDirect(int direct)
{
    return (Directional)(((int)direct + 4 - 1) % 4);
}

int Traversal(int PosX, int PosY, int direct, int MaxN, int MaxM)
{

    stack<Pos> posStack;
    posStack.push({ PosX, PosY, direct });

    int MoveCount = 0;

    while (!posStack.empty())
    {
        auto pos = posStack.top();
        posStack.pop();

        int CurPosX = pos.X;
        int CurPosY = pos.Y;
        int Curdirect = pos.direction;

        if (CurPosX < 0 || CurPosX >= MaxM)
            continue;

        if (CurPosY < 0 || CurPosY >= MaxN)
            continue;

        if (Map[CurPosY][CurPosX] == 1 || Map[CurPosY][CurPosX] == -1)
            continue;

        
            for (int i = 0; i < 4; ++i)
            {
                switch (Curdirect)
                {
                case North:
                    posStack.push(Pos{ CurPosX, CurPosY - 1, Curdirect });
                    break;
                case East:
                    posStack.push(Pos{ CurPosX + 1, CurPosY, Curdirect });
                    break;
                case South:
                    posStack.push(Pos{ CurPosX, CurPosY + 1, Curdirect });
                    break;
                case West:
                    posStack.push(Pos{ CurPosX - 1, CurPosY, Curdirect });
                    break;
                }
               
                Curdirect = MoveDirect(Curdirect);
            }
        
         ++MoveCount;
         Map[CurPosY][CurPosX] = -1;

    }
    return MoveCount;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    int PosX, PosY;
    int direct = North;
    cin >> PosX >> PosY >> direct;
  
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> Map[i][j];
        }
    }

   auto moved = Traversal(PosX, PosY, direct, N, M);


    cout << moved << endl;


    return 0;
}
