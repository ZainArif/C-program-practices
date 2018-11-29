#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	while((ch=getche())!='\r')
	{
	  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	     printf("\nVowel.");
	  else
	     printf("\nConsonant.");   
	}
}
