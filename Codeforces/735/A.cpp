
#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
const int N = 1e5+9;
typedef long long ll;
 
int n;
ll a[N];
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for (int i = 1; i <= n; i ++ ) scanf("%lld", &a[i]);
        ll sum=0;
        for (int i = 1; i < n; i ++ ){
            sum=max(sum,a[i]*a[i+1]);
        }
        printf("%lld\n",sum);
    }
}

