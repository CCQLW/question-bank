#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9, M = N;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> pii;

int n, m, W;
int h[N], e[M], w[M], ne[M], idx;
int st[N];
int dist[2009][2009];

void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void dij(int start) {
    memset(st, 0, sizeof st);
    dist[start][start] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> heap;
    heap.push({0, start});  // first存储距离，second存储节点编号

    while (heap.size()) {
        pii t = heap.top();
        heap.pop();

        int ver = t.second, distance = t.first;

        if (st[ver])
            continue;
        st[ver] = true;

        for (int i = h[ver]; i != -1; i = ne[i]) {
            int j = e[i];
            if (dist[start][j] > distance + w[i]) {
                dist[start][j] = distance + w[i];
                heap.push({dist[start][j], j});
            }
        }
    }

    // if (dist[en] == 0x3f3f3f3f) return -1;
    // return dist[en];
}

void solve() {
    scanf("%d%d%d", &n, &m, &W);
    memset(h, -1, sizeof h);
    int res = inf;
    while (m--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
        res = min(res, c);
    }
    memset(st, 0, sizeof st);
    memset(dist, 0x3f, sizeof dist);
    for (int i = 1; i <= n; i++) {
        dij(i);
    }
    int ans = inf;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j)
                ans = min(ans, dist[i][j]+dist[j][i]);
        }
    }
    if (ans <= W) {
        puts("2");
    } else {
        if (W >= res)
            puts("1");
        else
            puts("0");
    }
}

int main() {
    // int T;
    // scanf("%d", &T);
    // while (T--)
        solve();
}
