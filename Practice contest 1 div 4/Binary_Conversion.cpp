// Date: 02-05-2025 at 22:40 BST
// Link: https://www.codechef.com/problems/CONVERT
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, sk;
    cin >> s >> sk;
    int cnt = 0, mil = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != sk[i])
            cnt++;
        else
            mil++;
    }
    if (cnt % 2)
        cout << "NO" << nl;
    else
    {
        if ((cnt / 2 == k) || ((cnt / 2 <= k) && mil > 1))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
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