// Date: 13-04-2025 at 18:25 BST
// Link: https://vjudge.net/contest/666748#problem/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 2 * a << nl;
        return;
    }
    cout << (max(a, b) * 2) - 1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}