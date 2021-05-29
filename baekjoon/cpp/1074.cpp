#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int recursive(int n, int r, int c)
{
    if (n == 0)
        return 0;

    int half = 1 << (n - 1);

    if (r < half && c < half)
        return recursive(n - 1, r, c);   // 1번 
    else if (r < half && c >= half)
        return half * half + recursive(n - 1, r, c - half);  // 2번
    else if (r >= half && c < half)
        return 2 * half * half + recursive(n - 1, r - half, c);  // 3번
    else 
        return 3 * half * half + recursive(n - 1, r - half, c - half);  // 4번
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, r, c;
    cin >> N >> r >> c;

    cout << recursive(N, r, c) << "\n";

    return 0;
}
