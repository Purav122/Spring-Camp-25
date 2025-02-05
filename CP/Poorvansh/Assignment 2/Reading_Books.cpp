#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define loop(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()

int main() {
    int n;
    cin >> n;
    vll arr(n);  
    loop(i, n) {
        cin >> arr[i]; 
    }

    sort(all(arr)); 
     ll blackie = accumulate(arr.begin(), arr.begin() + n - 1, 0LL);  
      ll brownie = accumulate(all(arr), 0LL);  
 
    if (arr[n - 1] > blackie) {  
        cout << 2 * arr[n - 1]; 
    } else {
         cout << brownie; 
    }

    return 0;
}

