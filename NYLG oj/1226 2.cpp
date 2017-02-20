#include<stdio.h>
#define Week_f 7
int main(void)
{
	int day,week,day_yu;
	printf("please input the num of the day\n");
	
	scanf("%d",&day);
	day_yu=day%Week_f;
	week=day/Week_f;
	printf("%d days are %d weeks,%d days",day,week,day_yu);
	getchar ();
	getchar ();
	return 0;
	
	
}
 