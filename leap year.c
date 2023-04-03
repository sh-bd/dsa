#include <stdio.h>
int main()
{
int year;
printf("Enter the year ");
scanf("%d", &year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year\n", year);
else {
printf("%d is not a leap year (365 days)\n", year); //step 5
}
return 0;
}
