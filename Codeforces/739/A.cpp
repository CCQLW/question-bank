#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a;



void solve(){
    int n;
    scanf("%d", &n);
    printf("%d\n",a[n-1]);
}
void init(){
    for (int i = 1; i <= 1e6; i ++ ){
        if(i%3!=0&&i%10!=3){
            a.push_back(i);
        }
    }
}

int main(){
    init();
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
