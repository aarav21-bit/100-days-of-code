/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 09 Que:1
*Date: 28-09-2026
*Write a program to find the roots of a quadratic equation and categorize them.
*Problem Statement:
*
*/


#include <stdio.h>

int main()
{
    float a, b, c, d, root1, root2, sqrtd;
    int i;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        sqrtd = 0;

        for(i = 0; i * i <= d; i++)
        {
            sqrtd = i;
        }

        root1 = (-b + sqrtd) / (2 * a);
        root2 = (-b - sqrtd) / (2 * a);

        printf("Two distinct real roots\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("Root 1 = Root 2 = %.2f", root1);
    }
    else
    {
        printf("No real roots");
    }

    return 0;
}
