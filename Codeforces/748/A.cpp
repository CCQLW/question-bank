#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a[5];
    for (int i = 1; i <= 3; i++)
        scanf("%d", &a[i]);
    int a1 = max(a[3], a[2]) + 1;
    int a2 = max(a[1], a[3]) + 1;
    int a3 = max(a[1], a[2]) + 1;
    if (a1 < a[1])
        printf("0 ");
    else
        printf("%d ", a1 - a[1]);
    if (a2 < a[2])
        printf("0 ");
    else
        printf("%d ", a2 - a[2]);
    if (a3 < a[3])
        printf("0\n");
    else
        printf("%d\n", a3 - a[3]);
 
    // printf("%d %d %d\n", a1 - a[1], a2 - a[2], a3 - a[3]);
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
