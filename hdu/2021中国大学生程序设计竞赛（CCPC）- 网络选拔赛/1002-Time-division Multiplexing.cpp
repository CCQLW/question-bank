#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 2e5+9;

vector<string> a(200);

int lcm(int a,int b){
    return a/__gcd(a,b)*b;
}
void solve(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ){
        cin >> a[i];
    }
    int bei=1;
    for (int i = 0; i < n; i ++ ){
        bei=lcm(bei,a[i].size());
    }
    for (int i = 0; i < n; i ++ ){
        string m=a[i];
        while(a[i].size()<bei) a[i]+=m;
    }
    string s="";
    for (int j = 0; j < bei; j ++ )
        for (int i = 0; i < n; i ++ )
            s+=a[i][j];
    
    int su[30]={0},len=0,cnt=0,ans=1e9;
    
    for (int i = 0; i < s.size(); i ++ ){
        su[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i ++ ){
        if(su[i]>0)  len++;
    }
    memset(su, 0, sizeof su);
    s+=s;
    
    for (int i = 0, j = 0; i < s.size(); i ++ ){
        if(su[s[i] - 'a'] == 0) cnt++;
        su[s[i]-'a']++;
         while (j < i  && su[s[j]-'a']  > 1)  su[s[j] - 'a'] -- , j ++ ;
        if(cnt == len) ans = min(ans, i - j + 1);
    }
    
    printf("%d\n",ans);
}

int main(){
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
