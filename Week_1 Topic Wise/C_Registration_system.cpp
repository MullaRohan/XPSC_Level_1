// Date: 29-04-2025 at 19:51 BST
// Link: https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int x;
    cin >> x;
    map<string, int> mp;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            cout << "OK" << nl;
        else
            cout << s << mp[s] - 1 << nl;
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