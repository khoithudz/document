#include <bits/stdc++.h>
#define ll long long
#define N 1123456
using namespace std;
ll n,a[N],s[N];
int main ()
{
    ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   //freopen("lis.inp","r",stdin);
    //freopen("lis.out","w",stdout);
   cin >> n;
   for(ll i=1;i<=n;i++)
   {
       cin >> a[i];
   }
   ll l=0;
   for (ll i=1;i<=n;i++)
   {
       ll k=lower_bound(s+1,s+1+l,a[i])-s;
       s[k]=a[i];
       if (k>l)
       {
           l++;
       }
   }
   cout << l;
   return 0;
}
