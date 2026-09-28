/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 10 Que:1
*Date: 28-09-2026
*
*Problem Statement:
*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths..
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}
