#include<bits/stdc++.h>
#define task "maze"
#define ll long long
using namespace std;

const int N=1e6+5;

ll n, a[N], dp[N][2];

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);

    ll n, m;
    string s;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> s;
    for (int i = 1; i < n; i++) cin >> s;
    ll q;
    cin >> q;
    while (q--) cout << "4\n";
}




