#include<stdio.h>
#include<conio.h>
int main()
{
	int R,S,A;
	printf("Enter age of Ram: ");
	scanf("%d",&R);
	printf("\nEnter age of Shyam: ");
	scanf("%d",&S);
	printf("\nEnter age of Ajay: ");
	scanf("%d",&A);
	if(R<S && R<A)
	printf("\nRam is yongest.");
	else if(S<R && S<A)
    printf("\nShyam is youngest.");
    else
    printf("\nAjay is youngest.");
}
