#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[10], m;
    scanf("%d%d%d%d", &a[0], &a[1], &a[2], &m);
    sort(a, a + 3);
    int maxx = a[0] + a[1] + a[2] - 3;
    int minn = max(0, a[2] - a[1] - a[0] - 1);
    if (m >= minn && m <= maxx)
        puts("YES");
    else
        puts("NO");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
