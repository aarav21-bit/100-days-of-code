/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 03 Que:2
*Date: 05-09-2026
*
*Problem Statement:
*Write a program to swap two numbers using a third variable.
*/

#include<stdio.h>
int main()
{
int a,b,var;
printf("Enter two numbers:");
scanf("%d %d", &a,&b);

var=a;
a=b;
b=var;

printf("After swapping: \n");
printf("a= %d\n", a);
printf("b=%d\n", b);

return 0;
}
