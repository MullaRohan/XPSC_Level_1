// Date: 26-04-2025 at 23:59 BST
// Link: https://codeforces.com/problemset/problem/1722/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    vector<string> v[3];
    int a = 0, b = 0, c = 0;
    map<string, int> mp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            mp[s]++;
            v[i].push_back(s);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[v[0][i]] == 1)
            a += 3;
        else if (mp[v[0][i]] == 2)
            a += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[v[1][i]] == 1)
            b += 3;
        else if (mp[v[1][i]] == 2)
            b += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[v[2][i]] == 1)
            c += 3;
        else if (mp[v[2][i]] == 2)
            c += 1;
    }
    cout << a << " " << b << " " << c << nl;
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