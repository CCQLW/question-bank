#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
 
void solve(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a=n/2;
    if(m==n){
        puts("0");
        return ;
    }
    if(n%2==0) a--;
    if(a<m) a=max(n%m,n%(m+1));
    printf("%d\n",a);
}
 
int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
