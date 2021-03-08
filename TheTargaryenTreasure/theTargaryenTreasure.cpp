#include<bits/stdc++.h>
#define ll long long int
#define FIO ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define MOD 1000000007
using namespace std;

ll power(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while(b > 0) {
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}


int main() {
    FIO;

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll ans = 2 * power(3, n, MOD) - 6;
        cout << ans % MOD << "\n";
    }
    return 0;
}
