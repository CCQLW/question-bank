#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>

using namespace std;

const int N = 1e5+9;
int a[N],b[N];
map <int,int>ma;

void solve(){
    memset(b, 0, sizeof b);
    int n,m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++ ){
        int num;
        scanf("%d", &num);
        b[ma[num]]++;
    }
    for (int i = 1; i <= m; i ++ ) {
        int num;
        scanf("%d", &num);
        for (int j = 30; j >= 0; j -- ){
            int zhi=1<<j;
            while(zhi<=num&&b[ma[zhi]]>=1){
                b[ma[zhi]]--;
                num-=zhi;
                n--;
            }
        }
    }
    if(n>0)puts("No");
    else puts("Yes");
}


int main(){
    for (int i = 0; i < 31; i ++ ){
        ma[1<<i]=i;
    }
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
