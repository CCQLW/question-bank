// spfa 写法
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 2e5+9;
int start,en;
int n,m;      // 总点数
int h[N], w[N], e[N], ne[N], idx;       // 邻接表存储所有边
int dist[N];        // 存储每个点到1号点的最短距离
bool st[N];     // 存储每个点是否在队列中

void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

// 求1号点到n号点的最短路距离，如果从1号点无法走到n号点则返回-1
int spfa(int start)
{
    memset(dist, 0x3f, sizeof dist);
    memset(st, 0, sizeof st);
    dist[start] = 0;

    queue<int> q;
    q.push(start);
    st[start] = true;

    while (q.size())
    {
        auto t = q.front();
        q.pop();

        st[t] = false;

        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dist[j] > dist[t] + w[i])
            {
                dist[j] = dist[t] + w[i];
                if (!st[j])     // 如果队列中已存在j，则不需要将j重复插入
                {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }

    // if (dist[en] == 0x3f3f3f3f) return -1;
    return dist[en];
}

int main(){
    memset(h, -1, sizeof h);
    scanf("%d%d%d%d", &n, &m,&start,&en);
    for (int i = 1; i <= m; i ++ ){
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c); add(b, a, c);
    }
    printf("%d",spfa(start));
}

//堆优化版dij

#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>


using namespace std;

typedef pair<int, int> pii;

const int N = 2e5+9;

int start,en;
int n,m;      // 点的数量
int h[N], w[N], e[N], ne[N], idx;       // 邻接表存储所有边
int dist[N];        // 存储所有点到1号点的距离
bool st[N];     // 存储每个点的最短距离是否已确定

void add(int a, int b, int c)  // 添加一条边a->b，边权为c
{
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}
// 求1号点到n号点的最短距离，如果不存在，则返回-1
int dij(int start){
    memset(dist, 0x3f, sizeof dist);
    memset(st, 0, sizeof st);
    dist[start] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> heap;
    heap.push({0, start});      // first存储距离，second存储节点编号

    while (heap.size()){
        pii t = heap.top();
        heap.pop();

        int ver = t.second, distance = t.first;

        if (st[ver]) continue;
        st[ver] = true;

        for (int i = h[ver]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dist[j] > distance + w[i])
            {
                dist[j] = distance + w[i];
                heap.push({dist[j], j});
            }
        }
    }

    // if (dist[n] == 0x3f3f3f3f) return -1;
    return dist[en];
}

int main(){
    scanf("%d%d%d%d", &n, &m , &start, &en);
    memset(h, -1, sizeof h);
    for (int i = 1; i <= m; i ++ ){
        int x,y,w;
        scanf("%d%d%d", &x, &y,&w);
        add(x, y, w); add(y,x,w);
    }
    printf("%d",dij(start));
}


//朴素版dij


#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>


using namespace std;

const int N = 3000+9;
int n,m,start,en;
int g[N][N];  // 存储每条边
int dist[N];  // 存储1号点到每个点的最短距离
bool st[N];   // 存储每个点的最短路是否已经确定

// 求1号点到n号点的最短路，如果不存在则返回-1
int dij(){
	memset(st, false, sizeof st);
    memset(dist, 0x3f, sizeof dist);
    dist[start] = 0;

    for (int i = 0; i < n - 1; i ++ ){
        int t = -1;     // 在还未确定最短路的点中，寻找距离最小的点
        for (int j = 1; j <= n; j ++ )
            if (!st[j] && (t == -1 || dist[t] > dist[j]))
                t = j;

        // 用t更新其他点的距离
        for (int j = 1; j <= n; j ++ )
            dist[j] = min(dist[j], dist[t] + g[t][j]);

        st[t] = true;
    }

    // if (dist[n] == 0x3f3f3f3f) return -1;
    // for (int i = 1; i <= n; i ++ ){
    //     printf("%d\n",dist[i]);
    // }
    return dist[en];
}


int main(){
    scanf("%d%d%d%d", &n, &m,&start, &en);
    memset(g, 0x3f, sizeof g);
    for (int i = 1; i <= m; i ++ ){
        int x,y,w;
        scanf("%d%d%d", &x, &y,&w);
        g[x][y]=g[y][x]=min(w,g[x][y]);
    }
    printf("%d",dij());
    
}
