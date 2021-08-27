#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


void solve(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(b<a)swap(a,b);
    int sum=(b-a)*2;
    if(sum%2){
        puts("-1");
        return ;
    }
    if (a > sum || b > sum || c > sum){
		puts("-1");
        return ;
	}
    int mid=sum/2,ans;
    if (c > mid)
		ans = c - mid;
	else
		ans = c + mid;
    printf("%d\n",ans);
    
    
}

int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
