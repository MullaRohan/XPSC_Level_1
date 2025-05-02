// Date: 02-05-2025 at 12:06 BST
// Link: https://www.codechef.com/problems/MAXCOIN
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n, m, k;
    cin >> n >> m;
    k = m;
    int chef = 0, lose = 0;
    for (int i = n; i > (n - m); i--)
    {
        chef += pow(2, i);
    }
    for (int i = 1; i <= (n - k); i++)
    {
        lose += pow(2, i);
        // cout << i << " " << lose << nl;
    }
    cout << chef - lose << nl;
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