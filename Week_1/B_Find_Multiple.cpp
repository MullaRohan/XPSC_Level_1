// Date: 13-04-2025 at 18:17 BST
// Link: https://vjudge.net/contest/666748#problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = ceil(a * 1.0 / c);
    if (c * x <= b)
        cout << c * x << nl;
    else
        cout << -1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}