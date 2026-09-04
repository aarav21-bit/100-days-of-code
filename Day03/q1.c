/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 03 Que:1
*Date: 05-09-2026
*
*Problem Statement
*Write a program to convert temperature from Celsius to Fahrenheit. 
*/
#include<stdio.h>
int main()
{
float C,F;
printf("Enter temp in Celsius");
scanf("%f", &C);
F= (C*9/5) + 32;
printf("Temp in Fahrenheit= %.2f\n", F);
return 0;
}
