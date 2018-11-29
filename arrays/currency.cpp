#include<stdio.h>
#include<conio.h>
#define lim 5
int main()
{
	int table[lim]={50,25,10,5,1};
	int amount,quantity,dex;
	printf("Enter any amount: ");
	scanf("%d",&amount);
	for(dex=0;dex<lim;dex++)
	{
		quantity=amount/table[dex];
		printf("\nValue of coin= %d",table[dex]);
		printf("\nQuantity of coin= %d",quantity);
		amount%=table[dex];
	}
}

