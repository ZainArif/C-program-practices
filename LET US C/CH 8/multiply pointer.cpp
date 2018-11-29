#include<stdio.h>
#include<conio.h>
#define L 10
//void modify(int *,int);
void modify(int *);
int main()
{
	int a[L]={1,2,3,4,5,6,7,8,9,10};
	for(int l=0;l<L;l++)
	modify(&a[l]);
//	modify(&a[0],L);
	for(int k=0;k<L;k++)
    printf("%d\n",*(a+k));
}
//void modify(int *p,int r)
//{
//	for(int i=0;i<r;i++)
//	{
//		*p*=3;
//		p++;
//	}
//}
void modify(int *p)
{
	*p*=3;
}
