#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> tasks(n);

    
    loop(i, n) {
         cin >> tasks[i].first >> tasks[i].second;
    }

    sort(all(tasks));

     ll current_time = 0;
     ll total_reward = 0;

   
    loop(i, n) {
         ll duration = tasks[i].first;
        ll deadline = tasks[i].second;
        current_time += duration;
         total_reward += deadline - current_time;
    }

    cout << total_reward << endl;

    return 0;
}
