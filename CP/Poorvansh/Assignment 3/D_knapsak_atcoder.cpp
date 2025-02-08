#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

void solve() {
    ll n, W;
    cin >> n >> W;
    vll we(n), val(n);
    loop(i, n) {
        cin >> we[i] >> val[i];
    }

    vector<vll> dp(n + 1, vll(W + 1, 0));

    for (ll i = 1; i <= n; i++) {
        for (ll w = 0; w <= W; w++) {
            if (we[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - we[i - 1]] + val[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << dp[n][W] << "\n";
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
