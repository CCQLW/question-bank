#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define x first
#define y second

const int N = 500 + 9;
int a[N][N];
vector<pii> b;
double sum[N][N];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    // freopen("C:/Users/qlw/Desktop/in.txt","r",stdin);
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            b.push_back({a[i][j], (i - 1) * n + j});
            sum[i][j] = m;
        }
    }
    sort(b.begin(), b.end(), greater<pii>());
    for (int i = 0; i < (int)b.size(); i++) {
        // for (int k = 1; k <= n; k++) {
        //     for (int j = 1; j <= n; j++) {
        //         printf("%lf ", sum[k][j]);
        //     }
        //     puts("");
        // }
        int x = (b[i].y - 1) / n + 1, y = (b[i].y - 1) % n + 1;
        // printf("%d %d\n", x, y);
        int sum2 = 0;
        for (int j = 0; j < 4; j++) {
            int tx = x + dx[j], ty = y + dy[j];
            if (!(tx >= 1 && tx <= n && ty >= 1 && ty <= n))
                continue;
            if (a[tx][ty] < a[x][y]) {
                sum2++;
            }
        }
        // printf("%d\n", sum2);
        if (sum2 > 0) {
            for (int j = 0; j < 4; j++) {
                int tx = x + dx[j], ty = y + dy[j];
                if (!(tx >= 1 && tx <= n && ty >= 1 && ty <= n))
                    continue;
                if (a[tx][ty] < a[x][y]) {
                    sum[tx][ty] += sum[x][y] / sum2;
                }
            }
            sum[x][y] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(a[i][j]!=0){
                printf("0 ");
                continue;
            }
            if(sum[i][j]==0)
                printf("0 ");
            else printf("%lf ", sum[i][j]);

        }
        puts("");
    }
    system("pause");
}
