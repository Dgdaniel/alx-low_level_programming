#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long a;
printf("Size of an char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of an long int: %ld byte(s)\n", sizeof(long));
printf("Size of long long int: %ld byte(s)\n", sizeof(a));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
