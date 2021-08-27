#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;

const int N=300;

char s[N];
int prime[N];
bool st[N];
int cnt;

void get()
{
	for (int i = 2; i < N; i++)
	{
		if (st[i] == false) prime[cnt++] = i;
		for (int j = 0; i * prime[j] < N; j++)
		{
			st[i * prime[j]] = true;
			if (i % prime[j] == 0) break;
		}
	}
}

void solve(){
    int n;
    scanf("%d", &n);
    scanf("%s", s+1);
    int ans=0;
    for(int i=1;i<=strlen(s+1);i++)
    {
        int zhi=s[i]-'0';
        if(zhi==1||zhi==4||zhi==6||zhi==8||zhi==9){
            ans=zhi;
            break;
        }
    }
    if(ans != 0){
        puts("1");
        printf("%d\n",ans);
        return ;
    } 
    
    puts("2");
    for(int i=1;i<=strlen(s+1);i++){
        int zhi=s[i]-'0';
        for(int j=i+1;j<=strlen(s+1);j++){
            int changdu=zhi*10+(s[j]-'0');
            if(st[changdu]){
                ans=changdu;
                break;
            }
        }
        if(ans != 0)break;
    }
    printf("%d\n",ans);
}

int main(){
    get();
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}

