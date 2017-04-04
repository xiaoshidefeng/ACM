#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

#define lson l , m , rt << 1
#define rson m + 1 , r , rt << 1 | 1
const int maxn = 222222;

int MAX[maxn<<2];
int MIN[maxn<<2];
int SUM[maxn<<2];
int max(int a,int b){if(a>b)return a;else return b;}
int min(int a,int b){if(a<b)return a;else return b;}

void PushUP(int rt)
{
  MAX[rt] = max(MAX[rt<<1] , MAX[rt<<1|1]);
  MIN[rt] = min(MIN[rt<<1] , MIN[rt<<1|1]);
  SUM[rt] = SUM[rt<<1] + SUM[rt<<1|1];
}

void build(int l,int r,int rt) {
  if (l == r)
    {
    scanf("%d",&MAX[rt]);
    MIN[rt] = MAX[rt];
    SUM[rt] = MAX[rt];
    //printf("mi = %d\n",MIN[rt]);
  //    printf("ma = %d\n",MAX[rt]);
    return ;
  }
  int m = (l + r) >> 1;
  build(lson);
  build(rson);
  PushUP(rt);
}

void update(int p,int tihuan,int l,int r,int rt)
{
  if (l == r) {
    MAX[rt] = tihuan;
    MIN[rt] = tihuan;
    SUM[rt] = tihuan;
    return ;
  }
  int m = (l + r) >> 1;
  if (p <= m) update(p , tihuan ,lson);
  else update(p , tihuan , rson);
  PushUP(rt);
}

void update1(int p,int add,int l,int r,int rt)
{
  if (l == r) {
    SUM[rt] = SUM[rt] + add;
    return ;
  }
  int m = (l + r) >> 1;
  if (p <= m) update1(p , add ,lson);
  else update1(p , add , rson);
  PushUP(rt);
}

int query(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return MAX[rt];
  }
  int m = (l + r) >> 1;
  int ret = -1;
  if (L <= m) ret = max(ret , query(L , R , lson));
  if (R > m)  ret =  max(ret , query(L , R , rson));
  return ret;
}

int query1(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return MIN[rt];
  }
  int m = (l + r) >> 1;
  int ret = 99999;
  if (L <= m) ret = min(ret , query1(L , R , lson));
  if (R > m)  ret =  min(ret , query1(L , R , rson));
  return ret;
}

int queryhe(int L,int R,int l,int r,int rt)
{
  if (L <= l && r <= R)
  {
    return SUM[rt];
  }
  int m = (l + r) >> 1;
  int ret = 0;
  if (L <= m) ret += queryhe(L , R , lson);
  if (R > m)  ret +=  queryhe(L , R , rson);
  return ret;
}

int main()
{
  int n , m;
  while (~scanf("%d%d",&n,&m))
  {
    build(1 , n , 1);
    while (m --) {
      char op[2];
      int a , b;
      scanf("%s%d%d",op,&a,&b);
      if (op[0] == 'Q') //���������
      {
         /* for(int i = 1;i<=10;i++)
          printf("%d ",MAX[i]);
        puts("");*/
        printf("%d\n",query(a , b , 1 , n , 1));
      }
      else if(op[0]=='U') //�����滻
        update(a , b , 1 , n , 1);
      else if(op[0]=='M')//��������С
      {
        /*for(int i = 1;i<=10;i++)
          printf("%d ",MIN[i]);
        puts("");*/
        printf("%d\n",query1(a , b , 1 , n , 1));
      }
      else if(op[0]=='H')//�������
      {
        printf("%d\n",queryhe(a , b , 1 , n , 1));
      }
      else if(op[0]=='S')//��������
      {
        scanf("%d%d",&a,&b);
        update1(a , b , 1 , n , 1);
      }
       else if(op[0]=='E')//�������
      {
        scanf("%d%d",&a,&b);
        update1(a , -b , 1 , n , 1);
      }
    }
  }
  return 0;
}