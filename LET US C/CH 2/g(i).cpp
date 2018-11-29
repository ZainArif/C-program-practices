#include<stdio.h>
#include<conio.h>
int main()
{
	int w;
	printf("Enter weight of a boxer: ");
	scanf("%d",&w);
	if(w<115)
	printf("\nBoxer class is Flyweight.");
	else if(w>=115 && w<=121)
	printf("\nBoxer class is Bantamweight.");
	else if(w>=122 && w<=153)
    printf("\nBoxer class is Featherweight.");
    else if(w>=154 && w<=189)
    printf("\nBoxer class is Middleweight.");
    else if(w>=190)
    printf("\nBoxer class is Heavyweight.");
}
