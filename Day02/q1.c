/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 02 Que: 1
*Date: 05-09-2026
*
*Problem Statement:
*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include<stdio.h>
int main()
{
int length,breadth;
printf("Enter length");
scanf("%d", &length);
printf("Enter breadth");
scanf("%d", &breadth);

int perimeter,area;
perimeter = (length + breadth)*2; 
printf("Perimeter=%d\n", perimeter);
area= length*breadth;
printf("Area = %d\n", area);
return 0;
}
