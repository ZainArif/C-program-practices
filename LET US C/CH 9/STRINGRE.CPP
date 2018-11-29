#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  
  char *str[3]={"say hello","i will kill you"};
  for(int i=0;i<2;i++)
  {
  strrev(str[i]);
  printf("%s\n",str[i]);
  }
  getche();
}
