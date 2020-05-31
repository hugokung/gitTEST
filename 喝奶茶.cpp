
#include<bits/stdc++.h>
using namespace std;
char a[101];
int t,sum1,sum2;
int main()
{
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
    cin>>t;
    while(t--)
    {
        sum1=0,sum2=0;
        cin>>a;
        int n=strlen(a);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='a'||a[i]=='A') sum1++;
            if(a[i]=='b'||a[i]=='B') sum2++;
        }
        int s=(n/2);
        if(sum1>=s) cout<<"mxbc"<<endl;
        else if(sum2>=s) cout<<"yht"<<endl;
        else cout<<"zxwlj"<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}