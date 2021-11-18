#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+9;
int T,n;
char s[N];

int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		int cnt=0;
		ll res=0;
		for(int i=n-1;i>=0;i--)
		{
			if(!cnt||s[i]=='0')
				cnt++;
			else
			{
				cnt--;
				res+=i+1;
			}
				
		}
		printf("%lld\n",res);
	}
}
