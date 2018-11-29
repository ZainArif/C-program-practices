#include<stdio.h>
#include<conio.h>
int main()
{
	float guess,incr;
	char ch;
	printf("Type of a no b/w 1-99,and\n");
	printf("I'll guess what it is. Type 'e' for equal\n");
	printf("'g' for greater than & 'l' for lesser than\n");
	incr=guess=50;
	while(incr>1.0)
	{
		printf("\nIs your no greater or less than %.0f?",guess);
		ch=getche();
		incr=incr/2;
		if(ch=='e') break;
		else if(ch=='g')
		     guess=guess+incr;
		else
		    guess=guess-incr;     
	}
	printf("\nThe no is %.0f and I am not clever",guess);
}
