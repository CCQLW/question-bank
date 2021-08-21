#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
struct node {
    ll s,x;
};
node a[N],b[N];

bool cmp(node a,node b)
{
    return a.s>b.s;
}

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        ll n,m,k,fi,ma=0;
        scanf("%lld %lld %lld",&n,&m,&k);
        
        for(int i=1; i<=n; i++)
        {
            a[i].s=0;
            a[i].x=i;
        }
        for(int i=1; i<=m; i++)
        {
            b[i].x=i;
            b[i].s=0x3f3f3f3f;
        }
        for(int i=1; i<=n; i++) {
            ll t;
            for(int j=1; j<=m; j++) {
                scanf("%lld",&t);
                if(i==1&&j==1)
                    fi=t;
                a[i].s=max(a[i].s,t);
                b[j].s=min(b[j].s,t);
                if(i==1)
                    ma=max(ma,t);
            }
        }
        sort(a+1,a+n+1,cmp);
        sort(b+1,b+m+1,cmp);
        if(k==1)
        {
            printf("%lld\n",ma);
        }
        else if(k&1)
        {
            ma=max(fi,a[n].s);
            printf("%lld\n",ma);
        }
        else
        {
            ma=max(fi,b[1].s);
            printf("%lld\n",ma);
        }
    }
}
