#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and print how many days are left in the year, taking
 * leap years intpo account
 * return - always 0 if (success)
 */

int main(void)
{
int day;
int month;
int year;

month = 2;
day = 29;
year = 2000;

printf("Date : %02d%02d%04d\n", month, day, year);
day = convert_day(month, day);

print_remaining_days(2, 28, 2000);
print_remaining_days(1, 1, 2000);

return (0);
}
