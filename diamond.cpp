#include<stdio.h>
#include<conio.h>
int main()
{
	int row,colspace,num;
	printf("\n\t");
	for(row=1;row<=4;row++) {
		for(colspace=4-row;colspace>=1;colspace--) {
			printf(" ");
	    }
	    for(num=1;num<=row;num++) {
	        printf("%d ",num);
	    }
	    printf("\n\t");
    }

    for(row=3;row>=1;row--) {
		for(colspace=1;colspace<=4-row;colspace++) {
			printf(" ");
		}
		for(num=1;num<=row;num++) {
			printf("%d ",num);
	    }
	    printf("\n\t");
	}
        printf("\n\t");
     for(row=1;row<=4;row++) {
		for(colspace=4-row;colspace>=1;colspace--) {
			printf(" ");
	    }
	    for(num=1;num<=row;num++) {
	        printf("* ");
	    }
	    printf("\n\t");
    }

    for(row=3;row>=1;row--) {
		for(colspace=1;colspace<=4-row;colspace++) {
			printf(" ");
		}
		for(num=1;num<=row;num++) {
			printf("* ");
	    }
	    printf("\n\t");
	}   
}
