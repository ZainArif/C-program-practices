#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
int main()
{
	char str[MAX];
	int i,c=0,l;
	printf("Enter a sentence:\n");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
    	if( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')  	 
		  if( str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u')
            	c++;      	         	
	printf("The number of occurences of any two successive vowels= %d",c);
}
