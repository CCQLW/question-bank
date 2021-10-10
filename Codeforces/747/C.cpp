#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
char s[N];
 
void solve() {
    int n;
    char c;
    scanf("%d %c", &n, &c);
    cin >> s + 1;
    int flag = 0, flag2 = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] != c) {
            flag = i;
            break;
        }
    }
    if (flag == 0) {
        printf("0\n");
        return;
    }
    for (int i = n; i >= 1; i--) {
        if (s[i] == c) {
            flag2 = i;
            break;
        }
    }
    if (flag2 > n / 2) {
        printf("1\n%d\n", flag2);
        return;
    }
    if (s[n] == c) {
        printf("1\n%d\n", n);
        return;
    }
    printf("2\n%d %d\n", n, n - 1);
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
