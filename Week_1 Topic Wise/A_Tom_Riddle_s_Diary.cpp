// Date: 30-04-2025 at 22:12 BST
// Link: https://codeforces.com/contest/855/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s])
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
        mp[s] = true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}