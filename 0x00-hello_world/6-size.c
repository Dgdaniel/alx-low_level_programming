#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long a;
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long int: %ld byte(s)\n", sizeof(a));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
