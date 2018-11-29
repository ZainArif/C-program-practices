#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 5
void main(void)
{
 clrscr();
 char *str[MAX]={"We will teach you",
	      "Move a mountain",
	      "Level a building",
	      "Erase the past",
	      "Make a million"
	      },str1[10],str2[10],*ptr;
 int a,x,y=0,z,k,p,l2,count=0,count1=0;
 printf("Enter two strings:\n");
 gets(str1);
 gets(str2);
 for(int i=0;i<MAX;i++)
   if( (ptr=strstr(str[i],str1))!=0 )
     break;
 p=ptr-str[i];
 l2=strlen(str2);
 while(!((str[i][p]==32) || (str[i][p]=='\0')))
   {
   p++;
   count++;
   }
 while(str[i][y++]!='\0')
   count1++;
 p=ptr-str[i];
 if(l2<count)
 {
   x=count-l2;
   for(k=count+p;str[i][k]!='\0';k++)
       str[i][k-x]=str[i][k];
   str[i][k-x]='\0';
 }
 else
 {
   x=l2-count;
   for(z=count1;z>=count;z--)
      str[i][z+x]=str[i][z];
 }
 for(a=0;a<l2;a++)
    str[i][p++]=str2[a];
 printf("\n%s",str[i]);
 getche();
}