#include <bits/stdc++.h>
using namespace std;
 
const int N = 109;
int a[N];
 
void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    if (a[1] == a[n]) {
        puts("-1");
        return;
    }
    int ans;
    vector<int> b;
    for (int i = 2; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            b.push_back(a[i] - a[i - 1]);
        }
    }
    ans = b[0];
    for (int i = 1; i < b.size(); i++) {
        ans = __gcd(b[i], ans);
    }
    printf("%d\n", ans);
    // for (int i = 1; i <= n; i ++ )
    //     printf("%d ", a[i]);
    // puts("");
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
