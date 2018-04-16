#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<functional>
using namespace std;
typedef pair<int,int> abcd;

const int N=3005;

int n,m;
abcd a[N];
char d[N][N];
#define read(x) scanf("%d",&(x))
int main(){
  freopen("t.in","r",stdin);
  freopen("t.out","w",stdout);
  read(m); read(n);
  int t=0,minv=1<<30;
  for (int i=m-n+1;i<=m;i++) read(a[i].first),a[i].second=i,t+=a[i].first,minv=min(minv,a[i].first);
  if (t>m*(m-1)) return printf("no\n"),0;
  t=m*(m-1)-t;
  for (int i=1;i<=m-n;i++) a[i]=abcd(t/(m-n)+(i<=t%(m-n)),i);
  if (m-n && a[1].first>minv) return printf("no\n"),0;
  sort(a+1,a+m+1);
  t=0;
  for (int i=1;i<=m;i++){
    t+=a[i].first;
    if (t<i*(i-1)) return printf("no\n"),0;
  }
  for (int i=1;i<=m;i++) d[i][i]='X';
  for (int i=m;i;i--){
    sort(a+1,a+i+1);
    int t=a[i].first;
    for (int j=1;j<i;j++){
      if (t>1)
    t-=2,d[a[i].second][a[j].second]='W',d[a[j].second][a[i].second]='L';
      else if (t==1)
    t--,a[j].first--,d[a[i].second][a[j].second]=d[a[j].second][a[i].second]='D';
      else
    a[j].first-=2,d[a[i].second][a[j].second]='L',d[a[j].second][a[i].second]='W';
    }
  }
  printf("yes\n");
  for (int i=1;i<=m;i++)
    printf("%s\n",d[i]+1);
  return 0;
}
