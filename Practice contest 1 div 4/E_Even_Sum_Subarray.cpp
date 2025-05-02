// Date: 02-05-2025 at 12:22 BST
// Link: https://vjudge.net/contest/667724#problem/E
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), v2(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0)
    {
        cout << n << nl;
        return;
    }
    int i = 0;
    int j = n - 1;

    while (v[i] % 2 == 0)
        i++;
    while (v[j] % 2 == 0)
        j--;
    int ls = i + 1;
    int rs = n - j;

    cout << max(n - ls, n - rs) << endl;
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