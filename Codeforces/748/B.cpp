#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
 
void solve() {
    string s;
    cin >> s;
    int res1, res2;
    int i, j, n = s.size();
    for (i = s.size(); i >= 0; i--) {
        if (s[i] == '0')
            break;
    }
    res1 = n - i - 1;
    for (j = i - 1; j >= 0; j--) {
        if (s[j] == '0' || s[j] == '5')
            break;
    }
    res1 += i - j - 1;
 
    for (i = s.size(); i >= 0; i--) {
        if (s[i] == '5')
            break;
    }
    res2 = n - i - 1;
    for (j = i - 1; j >= 0; j--) {
        if (s[j] == '2' || s[j] == '7')
            break;
    }
    res2 += i - j - 1;
    printf("%d\n", min(res1, res2));
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    // system("pause");
}
