#include <bits/stdc++.h>
using namespace std;
 
const int N = 4e5 + 9;
int a[N];
void solve() {
    int n, k;
    scanf("%d%d", &k, &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, greater<int>());
    // printf("%d\n", a[1]);
    int ans = 0, m = k, mao = 0;
    for (int i = 1; i <= n; i++) {
        if (mao >= a[i])
            break;
        if (m - a[i] <= k) {
            ans++;
            k -= m - a[i];
            mao += m - a[i];
        } else
            break;
        // printf("%d %d %d %d\n", i, a[i], k,mao);
    }
    printf("%d\n", ans);
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
