/*
*Name: Aarav Deshlehra
*Roll : 590041873
*Day: 02  Que: 2
*Date: 05-09-2026
*
*Problem Statement:
* Write a program to calculate the area and circumference of a circle given its radius.
*/

#include<stdio.h>
int main()
{
int radius;
printf("Enter radius");
scanf("%d", &radius);
double area,circumference;
area  = 3.14*radius*radius;
circumference = 2*3.14*radius;

printf("Area=%f\n", area);
printf("Circumference=%f\n", circumference);
return 0;
}
