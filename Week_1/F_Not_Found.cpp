// Date: 17-04-2025 at 20:06 BST
// Link:
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    string s;
    cin >> s;
    set<char> st;
    for (auto x : s)
        st.insert(x);
    ;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (st.find(c) == st.end())
        {
            cout << c << nl;
            return;
        }
    }
    cout << "None" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}