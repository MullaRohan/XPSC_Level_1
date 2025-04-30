// Date: 30-04-2025 at 12:06 BST
// Link: https://codeforces.com/contest/918/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string s, sk;
        cin >> s >> sk;
        mp[sk] = s;
    }
    for (int i = 0; i < m; i++)
    {
        string s, sk;
        cin >> s >> sk;
        cout << s << " " << sk << " #";
        sk.pop_back();
        cout << mp[sk] << nl;
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