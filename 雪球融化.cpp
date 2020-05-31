#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll ti[100010];
ll vi[100010];
ll pre[100010];
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&vi[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&ti[i]);
        pre[i]=pre[i-1]+ti[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(pre[n-1]-pre[i-1]<=vi[i])
        {
            ans+=min(vi[i]-(pre[n-1]-pre[i-1]),ti[n]);
        }
    }
    ans+=min(vi[n],ti[n]);
    printf("%lld\n",ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
