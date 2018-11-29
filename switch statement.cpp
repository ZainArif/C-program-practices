#include<stdio.h>
#include<conio.h>
int main()
{
	int rank;
	printf("Type ICC rank:");
	scanf("%d",&rank);
	switch(rank)
	{
		case 1: printf("pakistan");break;
		case 2: printf("india");break;
		case 3: printf("australia");break;
		default: printf("Unknown input");
	}
}
