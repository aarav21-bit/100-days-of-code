/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 50 Que:1
*Date: 28-10-2026
*
*Problem Statement:
*Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main() {
    int day, month, year;

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format.");
        return 0;
    }

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.");
        return 0;
    }

    printf("Formatted date: %02d-%s-%04d",
           day, months[month - 1], year);

    return 0;
}
