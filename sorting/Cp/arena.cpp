//ques: https://codeforces.com/problemset/problem/1487/A

#include <iostream>
#include <vector>
#include <limits> 
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll min_val=1e15;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            min_val = min(min_val, v[i]); 
        }
        ll xt = 0;
        for (auto i : v) {
            if (i == min_val) xt++;
        }
        cout << n - xt << endl;
    }

    return 0;
}
