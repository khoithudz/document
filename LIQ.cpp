#include <bits/stdc++.h>
#define ll long long
#define N 1123456
using namespace std;
ll n, i, j, a[N], s[N], res=LLONG_MIN;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("liq.inp","r",stdin);
    freopen("liq.out","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    s[1]=1;
    for (i = 1; i <= n; i++)
    {
        s[i] = 1;
        for (j = 1; j < i; j++)
        {
            if (a[i] >= a[j])
                s[i] = max(s[i], s[j] + 1);
        }
        res=max(res,s[i]);
    }
    cout << *max_element(s,s+n+1);
    return 0;
}
