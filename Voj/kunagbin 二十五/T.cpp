#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int i,j,l,m,n,dist[51000];  
    while(scanf("%d%d%d",&l,&n,&m)!=EOF)  
    {  
        memset(dist,0,sizeof(dist));  
        dist[0]=0;  
        dist[n+1]=l;  
        int low=l;  
        int high=l;  
        for(i=1;i<=n+1;i++)  
        {  
            if(i<=n)  
            scanf("%d",&dist[i]);  
            if(low>dist[i]-dist[i-1])  
            low=dist[i]-dist[i-1];  
        }  
        sort(dist,dist+n+2);  
        while(low<=high)  
        {  
            int mid=(low+high)/2;  
            int num=0;  
            int sum=0;  
            for(i=1;i<=n+1;)  
            {  
                if((sum+=dist[i]-dist[i-1])<=mid)  
                {  
                    i++;  
                    num++;  
                }  
                else  
                {  
                    i++;  
                    sum=0;  
                }  
            }  
            if(num<=m)//注意，当num==m时也不一定是最优解   
            {  
                low=mid+1;  
            }  
            else  
            {  
                high=mid-1;  
            }  
        }  
        printf("%d\n",low);  
    }  
    return 0;  
}  
