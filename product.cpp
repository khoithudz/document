#include<bits/stdc++.h>
#define task "product"
#define ll long long
using namespace std;

const int N=1e6+5;

ll n, a[N], dp[N][2];

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);


    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[1][0] = abs (a[1] + 1);
    dp[1][1] = abs (a[1] - 1);
    for (int i = 2; i <= n; i++) {
        dp[i][0] = min (dp[i - 1][0] + abs (a[i] - 1), dp[i - 1][1] + abs (a[i] + 1));
        dp[i][1] = min (dp[i - 1][0] + abs (a[i] + 1), dp[i - 1][1] + abs (a[i] - 1));
    }
//    for (int i = 1; i <= n; i++) {
//        cout << dp[i][0] << " " << dp[i][1] << '\n';
//    }
    cout << dp[n][1];
}


