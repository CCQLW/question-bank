#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
#define ll long long
int T, n;
char s[N];
int a[N], p[N];

int main() {
    scanf("%d", &T);
    while (T--) {
        memset(a, 0, sizeof a);
        memset(p, 0, sizeof p);
        scanf("%d", &n);
        scanf("%s", s);
        int cnt = 0, flag = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                flag = 0;
                p[cnt]++;
            } else {
                if (i && s[i] == s[i - 1])
                    a[cnt] = 1;
                else
                    cnt++;
            }
        }
        if (flag) {
            printf("0\n");
            continue;
        }
        for (int i = 1; i <= cnt; i++) {
            if (a[i]) {
                p[i - 1]--;
                p[i]--;
            }
        }
        //		for(int i=0;i<=cnt;i++)
        //			printf("%d ",p[i]);
        //		puts("");
        for (int i = 1; i <= cnt; i++) {
            if (a[i])
                continue;
            int l, r;
            if (i == 1)
                l = p[i - 1];
            else
                l = (p[i - 1] + 1) / 2;
            if (i == cnt)
                r = p[i];
            else
                r = (p[i] + 1) / 2;
            if (l >= r)
                p[i - 1]--;
            else
                p[i]--;
        }
        //		for(int i=0;i<=cnt;i++)
        //			printf("%d ",p[i]);
        //		puts("");
        int res = max(p[0], p[cnt]);
        for (int i = 1; i < cnt; i++)
            res = max(res, (p[i] + 1) / 2);
        printf("%d\n", res + 1);
    }
}
