// Date: 23-04-2025 at 22:26 BST
// Link: https://codeforces.com/problemset/problem/1927/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool fst = true;
    int fst_b = -1, lst_b = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (fst)
            {
                fst_b = i;
                fst = !fst;
            }
            lst_b = i;
        }
    }
    // cout << fst_b << " " << lst_b << nl;
    cout << abs(fst_b - lst_b) + 1 << nl;
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