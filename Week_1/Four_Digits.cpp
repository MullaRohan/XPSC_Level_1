// Date: 13-04-2025 at 18:33 BST
// Link: https://vjudge.net/problem/AtCoder-abc222_a
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    string s;
    cin >> s;
    for (int i = 4; i > s.size(); i--)
        cout << '0';
    cout << s << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}