#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("data.in","w",stdout);
    srand(time(NULL));
    int n;
    n=100000;
    int k=100000;
    printf("%d\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",k--);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("1 ");
    }
    printf("\n");
    fclose(stdout);
    return 0;
}