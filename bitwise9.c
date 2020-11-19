#include<stdio.h>
int main()
{
 int n;
 printf("\nEnter num:");
 scanf("%d",&n);
 printf("\nIn hex:%x",n);

 n=n|0xfffdfff7;
 printf("\nReset val:%x",n);

 return 0;
}

