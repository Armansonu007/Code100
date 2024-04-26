#include <iostream>
#include <vector>
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
        int min_val = INT_MAX; // Changed variable name to avoid conflict with 'std::min'
        for (ll i = 0; i < n; i++) { 
            cin >> v[i];
            min_val = min(min_val, v[i]); // Used min_val instead of min
        }
        ll xt = 0; // Initialized xt to 0
        for (auto i : v) {
            if (i == min_val) xt++;
        }
        cout << n - xt;
    }

    return 0;
}
