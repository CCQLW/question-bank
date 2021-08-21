#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+7;
struct node{
    int s,x;
}a[N];
bool cmp(node a,node b)
{
    return a.s>b.s;
}
int p[N],b[N];

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p[i]);
            a[i].s=p[i];
            a[i].x=i;
        }
        for(int i=1;i<=n;i++)
            scanf("%d",&b[i]);
        sort(a+1,a+n+1,cmp);
        sort(b+1,b+n+1);
        for(int i=1;i<=n;i++)
        {
            int ma=p[i]+b[n];
            int mi=p[i]+b[1];
            int cnt=1,r=0,l=0;
            for(int j=1;j<=n;j++)
            {
//                cout<<ma<<" "<<a[j].s+b[cnt]<<endl;
                if(a[j].x!=i&&a[j].s+b[cnt]<=ma)
                {
                    
                    r++;
                    cnt++;
                }
                if(cnt==n)
                    break;
            }
            cnt=n;
            for(int j=n;j>0;j--)
            {
//                cout<<mi<<"   "<<a[j].s+b[cnt]<<endl;
                if(a[j].x!=i&&a[j].s+b[cnt]>mi)
                {
                    l++;
                    cnt--;
                }
                if(cnt==1)
                    break;
            }
            printf("%d %d\n",n-r,l+1);
        }
    }
 } 
