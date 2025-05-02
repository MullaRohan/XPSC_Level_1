// Date: 02-05-2025 at 12:17 BST
// Link: https://vjudge.net/contest/667724#problem/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int x;
    cin >> x;
    cout << ((100 - x) / 10) * 10 << nl;
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