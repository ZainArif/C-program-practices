#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,x;
	do
	{
		printf("\nEnter any character:");
		ch=getche();
		x=ch;
		while(x!=x)
		{
		}
		printf("\nCode for %c=%d\n",ch,ch);
		printf("\nDo you want to continue?\nPress y/n:");
	} 
     while(getche()== 'y');
}  
