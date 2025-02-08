#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

void solve() {
    ll n, k;
    cin >> n >> k;
    vll h(n);
     vll dp(n, LLONG_MAX);
    loop(i, n) {
        cin >> h[i];
    }

    dp[0] = 0;

      for (ll i = 0; i < n; i++) {
        for (ll j = 1; j <= k; j++) {
            if (i + j < n) {
                 dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
            }
        } 
    }

    cout << dp[n - 1] << "\n";
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
