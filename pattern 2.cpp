#include<stdio.h>
#include<conio.h>
int main()
{
	int row,colspace,num,i=1,k=1,count=1;
	printf("\n\t");
	for(row=1;row<=4;row++) {
		for(colspace=4-row;colspace>=1;colspace--) {
			printf(" ");
	    }
	    
	    for(num=k;num<=count;num++) {
	        printf("%d ",num);
	    }
	    k+=i++;
	    count+=i;
	    printf("\n\t");
    }
}
