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
        int min =INT_MAX;
        for (ll i = 0; i < n; i++) { 
            cin >> v[i];
            min=min(min, v[i]);

        }
        ll xt;
        for(auto i : v){
            if(i == min) xt++;
        }
        cout<<n-xt;
    }

    return 0;
}
