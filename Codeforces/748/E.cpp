#include <bits/stdc++.h>
using namespace std;
 
const int N = 4e5 + 9, M = 2 * N;
 
int h[N], e[M], ne[M], idx;
int d[N];
 
int dep[N];
 
int n, m, k;
 
queue<int> q;
 
void add(int a, int b)  // 添加一条边a->b
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
 
void topsort() {
    for (int i = 1; i <= n; i++)
        if (d[i]==1){
            q.push(i);
            dep[i] = 1;
        }
            
 
    while (q.size()) {
        int t = q.front();
        q.pop();
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            d[j] --;
            if (d[j] == 1){
                q.push(j);
                dep[j] = dep[t] + 1;
            }
        }
    }
}
 
void solve(){
    memset(d, 0, sizeof d);
    memset(dep, 0, sizeof dep);
    scanf("%d%d", &n, &k);
    idx = 0;
    m = n - 1;
    memset(h, -1, sizeof h);
 
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b);
        add(b, a);
        d[b]++;
        d[a]++;
    }
 
    topsort();
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if(dep[i]>k)
            res++;
    }
    printf("%d\n", res);
}
 
int main(){
    int T;
    scanf("%d", &T);
    while (T -- ) solve();
    // system("pause");
}
