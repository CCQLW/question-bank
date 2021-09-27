#include <bits/stdc++.h>
using namespace std;
const int N = 109;

char a[N];
void fan(int idx, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i + n] == ')') {
            swap(a[idx], a[i + n]);
            break;
        }
    }
}
void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        a[i] = '(';
    for (int i = 0; i < n; i++)
        a[i + n] = ')';
    int idx = n - 1;
    // for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 2 * n; k++)
                printf("%c", a[k]);
            puts("");
            swap(a[idx], a[j + n]);
            idx = j + n;
        }
    // }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    system("pause");
}
