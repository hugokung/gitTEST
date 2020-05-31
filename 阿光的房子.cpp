#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[1010];
int n;
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    int k;
    cin>>k;
    while(k--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int tmp=min(n-i+1,a[i]);
            if(tmp>ans) ans=tmp;
        }
        printf("%d\n",ans);
    }
    //fclose(stdin);
   // fclose(stdout);
    return 0;
}