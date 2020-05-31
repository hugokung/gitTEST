#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10];
int dir[4]={-1,0,1};
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    int q;
    scanf("%d",&q);
    while(q--)
    {
        for(int i=1;i<=3;i++) scanf("%lld",&a[i]);
        sort(a+1,a+3+1);
        ll ans=1e15;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    ll tmp=abs((a[1]+dir[i])-(a[2]+dir[j]))+abs((a[1]+dir[i])-(a[3]+dir[k]))+abs((a[2]+dir[j])-(a[3]+dir[k]));
                    ans=min(ans,tmp);
                }
            }
        }
        printf("%lld\n",ans);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}