#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 3e5+9;

char s[N];
int sum[N];

void solve(){
    memset(sum,0,sizeof(sum));
    int n,q;
    scanf("%d%d", &n, &q);
    scanf("%s", s+1);
    for (int i = 1; i <= n; i ++ ){
        int x=1;
        if(s[i]=='-') x = -1;
        if(i%2==1) sum[i] = sum[i-1] + x;
        else sum[i] = sum[i-1] - x;
    }
    while (q -- ){
        int l,r;
        scanf("%d%d", &l, &r);
        int num= r - l + 1;
        if(num % 2 == 1)puts("1");
        else if(sum[r]-sum[l-1]==0)puts("0");
        else puts("2");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}

