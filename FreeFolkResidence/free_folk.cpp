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
    
    int a[n];
    int maxLen = 0;
    for(int i=0;i<n;i++) cin >> a[i];
    
    
    for(int i=1;i<n-1;i++) {
        if(a[i-1] < a[i] && a[i] > a[i+1]) {
            int left = i - 1;
            int right = i + 1;
            while(left > 0 && a[left] > a[left-1]) left--;
            while(right < n - 1 && a[right] > a[right + 1]) right++;
            
            maxLen = max(maxLen, right - left + 1);
        }
    }
    
    cout << maxLen << "\n";
    
    return 0;
}
