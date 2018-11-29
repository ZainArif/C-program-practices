#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[100], b[20][20],*temp,*ptr[20];
    int i, j = 0, k = 0, n, m,count=0;
 
    printf("enter the string\n");
    gets(a);
//    scanf("%[^\n]s", a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
        {
            b[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            b[k][j] = a[i];
            j++;
        }
    }
    b[k][j] = '\0';
    for (i = 0;i <= k;i++)
    {
        for (j = i + 1;j <= k;j++)
        {
            if (strcmp(b[i], b[j]) == 0)
            {
                for (m = j;m <= k;m++)
                    strcpy(b[m], b[m + 1]);
                k--;
            }
        }
    }
    printf("\nUnsorted:\n");
    for (n = 0;n <= k;n++)
    {
        printf("%s ", b[n]);
    }
    while(count<=k)
	{
		  ptr[count]=b[count];  
		count++;  
	}
	for(int out=0;out<count-1;out++)
	   for(int in=out+1;in<count;in++)
	      if( strcmp(ptr[out],ptr[in]) >0 )
	      {
	      	temp=ptr[in];
	      	ptr[in]=ptr[out];
	      	ptr[out]=temp;
	      }
	 printf("\nsorted:\n");
     for (n = 0;n <= k;n++)
    {
        printf("%s ", ptr[n]);
    }       
}
