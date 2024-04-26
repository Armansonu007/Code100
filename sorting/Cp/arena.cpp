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
        for (ll i = 0; i < n; i++) { 
            cin >> v[i];
        }
    }

    return 0;
}
