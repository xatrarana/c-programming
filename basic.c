#include <stdio.h>
#include <conio.h>
 void main()
 {
int num1,num2;
  printf("enter the number1:");
   scanf("%d",&num1);
  printf("enter the number2:");
 
  scanf("%d",&num2);
 if (num1>num2)
  printf("num1 is greater");
  if (num1<num2)
  printf("num2 is greater");
  if (num1==num2)
  printf("both are equal");
  getch();
 }