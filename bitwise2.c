#include<stdio.h>
int main()
{
 char ch;
 printf("\nEnter char:");
 scanf("%c",&ch);
 printf("\nIn hex:%x",ch);

 ch=ch|0x04;

 printf("\nSet val:%x",ch);

 return 0;
}

