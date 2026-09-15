#include <bits/stdc++.h>
using namespace std;

struct Stadium {
    int a, b, c;
};

bool cmp(Stadium x, Stadium y) {
    return x.b < y.b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("STADIUM.inp","r",stdin);
    freopen("STADIUM.out","w",stdout);
    int n;
    cin >> n;

    vector<Stadium> s(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> s[i].a >> s[i].b >> s[i].c;
    }

    sort(s.begin() + 1, s.end(), cmp);

    vector<long long> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {

        dp[i] = dp[i - 1];

        int l = 1, r = i - 1;
        int pos = 0;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (s[mid].b <= s[i].a) {
                pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        dp[i] = max(dp[i], dp[pos] + s[i].c);
    }

    cout << dp[n];

    return 0;
}
