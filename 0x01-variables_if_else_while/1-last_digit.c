#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
  int n,length,lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
 
/* Assigning the number to an array as a string*/
char digitStr[];
sprintf((char*)digitStr, "%u", n);

/**
Check the length of the array to be able to know
the last element ie length - 1
*/
length=strlen(digitStr);
lastDigit=digitStr[length - 1];

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 5)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}

return (0);
}
