#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int k;
    scanf("%d", &k);
    int sum=1,cnt=1;
    while (1){
        if(k-sum<=0)break;
        k-=sum;
        sum+=2;
        cnt++;
    }
    // printf("%d %d %d\n",k,sum,cnt);
    
    int i=1;
    for (i  ; i < cnt; i ++ ){
        k--;
        if(k==0){
            printf("%d %d\n",i,cnt);
            return ;
        }
        
    }
    for (i = cnt ; i >= 1; i -- ){
        k--;
        if(k==0){
            printf("%d %d\n",cnt,i);
            return ;
        }
        
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
