#include<bits/stdc++.h>
#define ll long long int
#define FIO ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL)
#define MOD 1000000007
using namespace std;

bool check(int n) {
	int num;
	while (n > 0) {
		num = n % 5;
		if (num > 2)
			return false;
		n /= 5;
	}
	return true;
}


int main() {

    FIO;
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll s = 0;
		for (int i = 1; i <= n; i++) {
			if (check(i))
				s += i;
		}
		cout << s << endl;
	}
	return 0;
}
