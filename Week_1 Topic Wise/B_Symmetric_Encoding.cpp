// Date: 02-05-2025 at 09:27 BST
// Link: https://codeforces.com/contest/1974/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    string s, sk;
    cin >> s;
    set<char> st;
    for (auto x : s)
        st.insert(x);
    unordered_map<char, char> mp;
    auto it = st.begin();
    auto gt = st.end();
    --gt;
    for (auto i = it; i != st.end(); i++)
    {
        mp[*i] = *gt;
        gt--;
    }
    for (auto x : s)
        sk.push_back(mp[x]);
    cout << sk << nl;
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