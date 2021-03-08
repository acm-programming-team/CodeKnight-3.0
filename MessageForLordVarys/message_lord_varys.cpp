#include<bits/stdc++.h>
#define ll long long int
#define FIO ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define MOD 1000000007
using namespace std;

#define ll long long int

/*

This is not the best implementation, the code has been written this wat for better understanding.

*/

int check(ll n) {
    while(n > 0) {
        if(n % 10 == 9) {
            if((n / 10) % 10 == 9) {
                if(((n / 10) / 10) % 10 == 3) {
                    n = n / 1000;
                    continue;
                } else {
                    return 0;
                }
            } else if((n / 10) % 10 == 3) {
                n = n / 100;
                continue;
            } else {
                return 0;
            }
        } else if(n % 10 == 3) {
            n = n / 10;
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}


int main() {

    FIO;

    ll n;
    cin >> n;
    if(check(n)) cout << "REAL\n";
    else cout << "FAKE\n";
    return 0;
}
