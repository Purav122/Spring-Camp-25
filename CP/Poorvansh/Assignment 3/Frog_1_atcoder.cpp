#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    vll dp(n + 1, -1);
    loop(i, n) {
        cin >> a[i];
    }

    dp[0] = 0;
    if (n > 1) dp[1] = abs(a[1] - a[0]);

    for (ll i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }

    ll ans = dp[n - 1];
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
