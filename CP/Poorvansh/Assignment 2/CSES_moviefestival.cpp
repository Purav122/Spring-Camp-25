#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> intervals(n);
    loop(i, n) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    
    sort(all(intervals), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int lastEndTime = intervals[0].second, count = 1;

    
    loop(i, n) {
        if (i > 0 && intervals[i].first >= lastEndTime) {
            count++;
            lastEndTime = intervals[i].second;
        }
    }

    cout << count << endl;

    return 0;
}
