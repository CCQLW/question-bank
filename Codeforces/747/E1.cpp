#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;
 
ll qu(ll a, ll k)  // 求a^k mod p
{
    ll res = 1;
    while (k) {
        if (k & 1)
            res = res * a % mod;
        a = a * a % mod;
        k >>= 1;
    }
    return res;
}
ll qu2(ll a, ll k)  // 求a^k mod p
{
    ll res = 1;
    while (k) {
        if (k & 1)
            res = (ll)res * a;
        a = (ll)a * a;
        k >>= 1;
    }
    return res;
}
void solve() {
    ll n;
    scanf("%lld", &n);
    ll ans = 1;
    ans = qu2(2, n) - 2;
    ans = qu(4, ans) * 6 % mod;
    printf("%lld\n", ans);
}
 
int main() {
    // int T;
    // scanf("%d", &T);
    // while (T -- )
    solve();
    // system("pause");
}
