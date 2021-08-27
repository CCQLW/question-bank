#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

vector<string>a;

int check(string s,string b){
    int cnt=0,x=0,y=0;
    for (int i = 0; i < s.size() && y < b.size(); i ++ ){
        if(s[i]==b[y]){
            y++;
            cnt++;
        }
    }
    return s.size()+b.size()-2*cnt;
}


void solve(){
    string n;
    cin >> n;
    int ans=n.size()+1;
    for(auto i:a){
        ans=min(ans,check(n,i));
    }    
    printf("%d\n",ans);
}

int main(){
    for (ll i = 0; (1ll << i) <= 1e18; i ++ ){
        a.push_back(to_string(1ll << i));
    }
    int n;
    scanf("%d", &n);
    while (n -- ) solve();
}
