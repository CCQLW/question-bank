#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

//打表过程
const int N = 100;
int main(){
    int a[N][N];
    int cnt=1;
    int n=10;
    for (int j = 1; j <= n; j ++ ){
        int i=1;
        for (i  ; i < j; i ++ ){
            a[i][j]=cnt++;
        }
        for (i = j ; i >= 1; i -- ){
            a[j][i]=cnt++;
        }
    }
    
    for (int i = 1; i <= n; i ++ ){
        for (int j = 1; j <= n; j ++ ){
            printf("%3d ",a[i][j]);
        }
        puts("");
    }
}






