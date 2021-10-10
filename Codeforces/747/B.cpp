
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 9;
int mod = 1e9 + 7;
 
int qu(int a, int k, int p)  // 求a^k mod p
{
    int res = 1 % p;
    while (k) {
        if (k & 1)
            res = (ll)res * a % p;
        a = (ll)a * a % p;
        k >>= 1;
    }
    return res;
}
void solve() {
    vector<int> a;
    ll n, k;
    scanf("%lld%lld", &n, &k);
    while (k) {
        a.push_back(k % 2);
        k /= 2;
    }
    // a.reserve(a.size());
    // reverse(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i ++ )
    //     printf("%d", a[i]);
    // puts("");
    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            ans = (qu(n, i, mod) % mod + ans) % mod;
        }
    }
    printf("%lld\n", ans);
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
}
