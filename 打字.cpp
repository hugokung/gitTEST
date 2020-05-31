#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[200010];
map<char,int> ma;
int f[200010];
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    int n,k;
    scanf("%d %d",&n,&k);
    scanf("%s",s+1);
    for(int i=1;i<=k;i++)
    {
        char op[3];
        scanf("%s",op);
        ma[op[0]]=1;
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(ma[s[i]]==1)
        {
            f[i]=f[i-1]+1;
        }
        ans+=f[i];
    }
    printf("%lld\n",ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}