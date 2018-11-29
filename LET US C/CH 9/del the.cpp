#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 80
int main()
{
	char str[MAX],str1[4]="the",*ptr;
	int d,l;
	printf("Enter a sentence:\n");
	gets(str);
	ptr=strstr(str,str1);
    while(ptr!=0)
	{
		d=ptr-str;
		l=strlen(str1);
		for(int i=d;i<(MAX-l);i++)
			str[i]=str[i+l];
		ptr=strstr(str,str1);  
	}
	puts(str);	
}
