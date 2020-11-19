#include<stdio.h>
void main()
{
  char ch,c1,c2;
  printf("\nEnter char:");
  scanf("%c",&ch);
  printf("\nIn hex:%x",ch);
  
  c1=c&0xf0;
  c1=c1>>4;
  c2=c&0x0f;
  c2=c2<<4;
  ch=c2|c1;

  printf("\nSwap nibble char:%x",ch);

}
