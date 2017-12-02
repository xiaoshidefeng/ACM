#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;

struct point
{
	double x;
	double y;
};

point p[1000005];
point gravity(point *p, int n)
{
	double area = 0;
	point center;
	center.x = 0;
	center.y = 0;		
	for (int i = 0; i < n-1; i++)
	{
		area += (p[i].x*p[i+1].y - p[i+1].x*p[i].y)/2;
		center.x += (p[i].x*p[i+1].y - p[i+1].x*p[i].y) * (p[i].x + p[i+1].x);
		center.y += (p[i].x*p[i+1].y - p[i+1].x*p[i].y) * (p[i].y + p[i+1].y);
	}	
	area += (p[n-1].x*p[0].y - p[0].x*p[n-1].y)/2;
	center.x += (p[n-1].x*p[0].y - p[0].x*p[n-1].y) * (p[n-1].x + p[0].x);
	center.y += (p[n-1].x*p[0].y - p[0].x*p[n-1].y) * (p[n-1].y + p[0].y);		
	center.x /= 6*area;
	center.y /= 6*area;
	return center;
}



int main()
{
    long t;
    cin>>t;
    while(t--){
        long N;
        cin>>N;
        for(int i=0;i<N;i++){
            scanf("%lf%lf",&p[i].x,&p[i].y);
        }
        point g = gravity(p,N);

        printf("%.2f %.2f\n",g.x,g.y);

    }
    return 0;
}