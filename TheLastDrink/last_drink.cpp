#include<bits/stdc++.h>
#define ll long long int
#define FIO ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define MOD 1000000007
using namespace std;


int main() {
    FIO;

    int q;
    cin >> q;
    
    while(q--) {
        ll n, k;
        cin >> n >> k;
        if((n / k) & 1) {
            cout << "FIRST\n";
        } else {
            cout << "SECOND\n";
        }
    }
    
    return 0;
}
