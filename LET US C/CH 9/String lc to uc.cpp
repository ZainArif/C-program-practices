#include<stdio.h>
#include<conio.h>
#include<string.h>
#define LIM 10
int main()
{
	char a[LIM];
    printf("Enter a sentence:\n");
    gets(a);
    strupr(a);
    puts(a);
    
}
