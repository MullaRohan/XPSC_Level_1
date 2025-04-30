// Date: 23-04-2025 at 22:10 BST
// Link: https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, d = 0;
    bool sereja = true;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        // serejas turn
        if (sereja)
        {
            if (v[l] > v[r])
                s += v[l++];
            else
                s += v[r--];
            sereja = !sereja;
        }
        // dimas turn
        else
        {
            if (v[l] > v[r])
                d += v[l++];
            else
                d += v[r--];
            sereja = !sereja;
        }
    }
    cout << s << " " << d << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}