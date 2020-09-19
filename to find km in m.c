#include <stdio.h>
#include <conio.h>
void main()

{
  int km, m;

  printf("enter the kilometer: ");
  scanf("%d",&km);
  m=km*1000;
  printf("the length in meter=%d",m);
  getch();
}