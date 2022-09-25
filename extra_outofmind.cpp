// Author: Vinay O. Khilwani
// Language: C++17

// Optimizations
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target ("avx2")
// #pragma GCC optimize ("Os")

// Libraries
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Defines
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define fast ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define sz(a) int (a.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
using ll = long long int;
using ld = long double;
const ll mod = (ll) (1e9) + 7LL;
const ll M = 998244353LL;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ld pi = acos(-1);

// Global Variable(s)
int dp[1 << 20];

// Solver Function(s)
void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    vector<int> lst(21, -1);
    vector<int> state(n + 1, 0);
    ll curr = 0;
    int ind = 0;
    for (auto x : v)
    {
        int bits = __builtin_ctz(x);
        for (int i = lst[bits] + 1; i <= ind; i++)
        {
            curr -= dp[state[i]];
            state[i] |= (1 << bits);
            curr += dp[state[i]];
        }
        ind++;
        lst[bits] = ind - 1;
        ans += curr;
    }
    cout << ans << "\n";
}

// Main Function
int main()
{
    fast
    for (int i = 0; i < (1 << 20); i++)
    {
        dp[i] = 1e9;
    }
    dp[0] = dp[1] = 0;
    for (int i = 2; i < (1 << 20); i++)
    {
        for (int bit = 1; bit < 20; bit++)
        {
            dp[i] = min(dp[i], dp[(i & ((1 << bit) - 1)) | (i >> bit)] + 1);
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
















