#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 80
int main()
{
	char str[MAX];
	gets(str);
	printf("Before deleting vowels:\n%s",str);
	for(int i=0;i<MAX;i++)
	  if( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
	     for(int j=i;j<MAX;j++)
	         str[j]=str[j+1];
	printf("\nAfter deleting vowels:\n%s",str);         
}
