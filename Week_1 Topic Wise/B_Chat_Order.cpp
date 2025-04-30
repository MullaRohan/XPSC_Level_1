// Date: 30-04-2025 at 22:05 BST
// Link: https://codeforces.com/problemset/problem/637/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[v[i]]++;
        if (mp[v[i]] == 1)
            cout << v[i] << nl;
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