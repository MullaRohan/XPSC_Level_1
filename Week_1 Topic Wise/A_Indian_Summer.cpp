// Date: 26-04-2025 at 18:40 BST
// Link: https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    set<string> st;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string ss;
        getline(cin, ss);
        st.insert(ss);
    }
    cout << st.size() << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}