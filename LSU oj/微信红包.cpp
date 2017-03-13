#include <stdio.h>
#include <string.h>
#include <algorithm>
const int N=1210;
int val[N],dp[N];
int maxt;

int main(void)
{
    int n,i,j;
    while (~scanf("%d",&n)&&n)
    {
        maxt=0;
        memset(val,0,sizeof(val));
        memset(dp,0,sizeof(dp));
        for (i=0; i<n; ++i)
        {
            int t,v;
            scanf("%d%d",&t,&v);
            val[t]=std::max(val[t],v);
            if(t>maxt)
                maxt=t;
        }
        for (i=0; i<=maxt; ++i)
        {
            dp[i]=val[i];
            for (int j=1; j<=i-5; ++j)
            {
                dp[i]=std::max(dp[i],dp[j]+val[i]);
            }
            for (int j=i-5; j<=i; ++j)
                dp[i]=std::max(dp[i],dp[j]);
        }
        printf("%d\n",dp[maxt]);
    }
    return 0;
}