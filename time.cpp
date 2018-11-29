#include<stdio.h>
#include<conio.h>
int main()
{
	int h1,m1,h2,m2,t1,t2;
	printf("Enter start time:");
	scanf("%d:%d",&h1,&m1);
	printf("\nEnter end time:");
	scanf("%d:%d",&h2,&m2);
	t1=h1*60+m1;
	t2=h2*60+m2;
	printf("\nDuration is %d minutes",t2-t1);
	getche();
    return 0;
}

