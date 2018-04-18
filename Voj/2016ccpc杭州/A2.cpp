#include<iostream>  
using namespace std;  
long long num[100005];  



int main()  
{  
	
    int cas;  
    scanf("%d",&cas);  
    int c=0;  
    int n,k;  
    while(cas--)  
    {  
        scanf("%d%d",&n,&k);  
        long long sum=0;  
        for(int i=0;i<n;i++)  
        {  
            scanf("%lld",&num[i]);  
            sum+=num[i];  
        }  
        if(sum%k!=0)  
        {  
            printf("Case #%d: -1\n",++c);  
            continue;  
        }  
        long long ans=0;  
        long long last=sum/k;  
        for(int i=0;i<n;)  
        {  
            if(num[i]<last)  
            {  
                long long now=num[i];  
                int l=i+1;  
                while(now<last)  
                {  
                    now+=num[l];  
                    ans++;  
                    l++;  
                }  
                num[l-1]=now;  
                i=l-1;  
            }  
            else if(num[i]>last)  
            {  
                while(num[i]>last)  
                {  
                    num[i]-=last;  
                    ans++;  
                }  
            }  
            else  
            {  
                i++;  
            }  
        }  
        printf("Case #%d: %lld\n",++c,ans);  
    }  
}  
