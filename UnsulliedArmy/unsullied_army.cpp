#include<bits/stdc++.h>
#define ll long long int
#define FIO ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define MOD 1000000007
using namespace std;


int main() {
    FIO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int maxCount = 0;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        maxCount = max(maxCount, __builtin_popcount(x));
    }
    cout << maxCount;
    return 0;
}
