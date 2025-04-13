// Date: 13-04-2025 at 21:59 BST
// Link: https://codeforces.com/contest/2094/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if (n == m)
    {
        cout << l << " " << r << nl;
        return;
    }
    if (abs(l) > abs(r))
    {
        cout << abs(m) - abs(l) << " " << r << nl;
    }
    else
        cout << l << " " << m - abs(r) << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}