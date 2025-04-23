// Date: 13-04-2025 at 17:04 BST
// Link: https://vjudge.net/problem/AtCoder-abc209_a#author=philtron_c
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << 0 << nl;
        return;
    }
    cout << b - a + 1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}