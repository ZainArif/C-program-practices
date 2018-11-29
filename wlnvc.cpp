#include<stdio.h>
#include<conio.h>
void vcs();
int main()
{
	vcs();
}
void vcs()
{
	int sc=0,vc=0,cc=0;
	char ch;
	printf("Enter a phrase: ");
	while((ch=getche())!='\r')
	{
		 if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		       vc++;
		 else if( !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') )
		    cc++;
		 else if( ch<65 || ch> 122) 
		    sc++;	       
	}
	
	printf("\nVowels count = %d",vc);
	printf("\nConsonants count = %d",cc);
	printf("\nspecial character count = %d",sc);
	
}

