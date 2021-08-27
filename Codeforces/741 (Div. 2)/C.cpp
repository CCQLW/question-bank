#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 20009;

char s[N];

void solve(){
    int n;
    scanf("%d", &n);
    scanf("%s", s+1);
    int len=n/2,ans=0;
    for (int i = 1; i <= n; i ++ ){
        if(s[i]=='0'){
            ans=i;
            break;
        }
    }
    if(ans){
        if(ans > len) printf("%d %d %d %d\n",1,ans,1,ans-1);
        else printf("%d %d %d %d\n",ans,n,ans+1,n);
        return ;
    }
    printf("%d %d %d %d\n",1,len*2,1,len);
}

int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}

