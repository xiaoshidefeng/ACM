#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;

struct node{
	int t;
	int r;
}a[20010];

int cmp(const node &a,const node &b){
	if(a.t<b.t)
		return 1;
	else 
		return 0;
}

int main(int argc, char const *argv[])
{
	// freopen("in.txt", "r", stdin);
	int t;
	cin>>t;
	while(t--){
		int n,l;
		cin>>n>>l;
		for(int i=0;i<n;i++){
			int h,m,s;
			scanf("%d:%d:%d",&h,&m,&s);
			a[i].t=h*60*60+m*60+s;
			a[i].r=i+1;
		}
		sort(a,a+n,cmp);
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<a[i].t<<"  "<<a[i].r<<endl;
		// }
		int count=1;
		int time = a[0].t;
		int j=1;
		int b[20010];
		memset(b,0,sizeof(b));
		b[0]=a[0].r;
		for(int i=1;i<n;i++){
			if(a[i].t >= time+l)
			{
				time=a[i].t;
				count++;
				b[j]=a[i].r;
				j++;
			}
		}
		sort(b,b+count);
		printf("%d\n", count);
		// printf("%d\n", b[0]);
		// printf("%d ", a[0].r);
		for(int i=0;i<count;i++){
			if(i<count-1)
				printf("%d ", b[i]);
			else
				printf("%d\n", b[i]);
		}
	}
	return 0;
}