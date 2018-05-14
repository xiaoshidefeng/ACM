#include<bits/stdc++.h>
using namespace std;
const double eps = 1.0e-6; //¸¡µã
//vector<int>mat[100005];
//struct node1
//{
//  __int64 x,y,l;
//}po1[100005];
//
//int cmp0(int a,int b)
//{
//  return a>b;
//}
//
//int cmp1(node a,node b)
//{
//	if(a.x==b.x)
//	{
//		return a.y<b.y;	
//	}
//	return a.x > b.x;
//}
//
//int cmp2(node a,node b)
//{
//	return a.x < b.x;
//}

//int cmp3(node a,node b)
//{
//	return a.l < b.l;
//}

//int gcd(int a,int b)
//{
//  int c=a;
//  int d=b;
//  int mod=a%b;
//  while(b)
//  {
//      mod = a%b;
//      a=b;
//      b=mod;
//  }
//  return a;
//}
 
//bool is[10000005];
//__int64 pri[100005];
//void prime()  
//{  
//    memset(is,0,sizeof(is));  
//    int cot=0;  
//    for(__int64 i=2;i<=10000000;i++)  
//    {  
//        if(is[i]==false)  
//        {
//            {  
//                if(cot>=100000)  
//                    break;  
//                pri[++cot]=i;  
//                for(__int64 j=i;j<=10000000;j=j+i)  
//                {  
//                    is[j]=true;  
//                }  
//            }  
//        }
//    }  
//} 

//__int64 mod = 1e9+7;
//__int64 PowerMod(__int64 a,__int64 b,__int64 c)
//{
//	int ans = 1;
//	a = a%c;
//	while(b>0)
//	{
//		if(b%2==1) ans = (ans *a)%c;
//		b/=2;
//		a=(a*a)%c;
//	} 
//	return ans;
//}
int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int cnt=0;
	int num=0;
	int ss = s.size();
	for(int i=0;i<ss;i++)
	{
		if(s[i]=='x')
		{
			num++;
			if(num==3)
			{
				cnt++;
				num=2;	
			}	
		} 
		else if(s[i]!='x')
		{
			num=0;
		}
	}
	cout << cnt << endl; 
} 
