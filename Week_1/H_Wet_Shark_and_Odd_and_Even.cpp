// Date: 23-04-2025 at 21:19 BST
// Link: https://vjudge.net/contest/666748#problem/H
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2)
            v.push_back(x);
        else
            sum += x;
    }
    sort(v.begin(), v.end(), greater<int>());
    if (v.size() % 2)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            sum += v[i];
        }
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
    }
    cout << sum << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}