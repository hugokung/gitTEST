#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    ll t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1);
        if((n-1)%2==1) ans=ans*(-1);
        cout<<ans<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}