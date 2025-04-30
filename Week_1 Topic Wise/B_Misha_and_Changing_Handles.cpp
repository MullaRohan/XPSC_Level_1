// Date: 26-04-2025 at 23:05 BST
// Link: https://codeforces.com/problemset/problem/501/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    map<string, string> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (mp2.find(s1) == mp2.end())
        {
            mp1[s1] = s2;
            mp2[s2] = s1;
        }
        else
        {
            mp1[mp2[s1]] = s2;
            // mp2.erase(s1);
            mp2[s2] = mp2[s1];
        }
    }
    cout << mp1.size() << nl;
    for (auto x : mp1)
        cout << x.first << " " << x.second << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}