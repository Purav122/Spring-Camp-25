#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

void solve() {
    ll H, W;
    cin >> H >> W;
    vector<string> grid(H);
    loop(i, H) {
        cin >> grid[i];
    }

    vector<vector<ll>> dp(H, vector<ll>(W, 0));
    dp[0][0] = 1;

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (grid[i][j] == '#') continue; 

            if (i > 0) dp[i][j] =  dp[i - 1][j] % MOD; 
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD; 
        }
    }

    cout << dp[H - 1][W - 1] << "\n";
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
