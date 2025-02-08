#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

void solve() {
    ll n;
    cin >> n;
    vector<vll> h(n, vll(3));
     loop(i, n) {
        cin >> h[i][0] >> h[i][1] >> h[i][2];
    }

    vector<vll> dp(n, vll(3, 0));
    dp[0][0] = h[0][0];
    dp[0][1] = h[0][1];
    dp[0][2] = h[0][2];

    for (ll i = 1; i < n; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + h[i][0];
         dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + h[i][1];
         dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + h[i][2];
    } 

    ll ans = max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tt = 1;

    while (tt--) {
        solve();
    }

    return 0;
}
