/*
*Name: Aarav  Deshlehra
*Roll: 590041873
*Day: 01 Que: 2
*Date: 03-09-2026
*
*Problem Statement:
*Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d %d", &a, &b);
int sum,difference,product,quotient;
sum = a+b;
difference= a-b;
product = a*b;
quotient= a/b;
printf("%d %d %d %d", sum, difference, product, quotient);

return 0;
}
