#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
memset((void *)((char *)&n + sizeof(int) * 2), 98, sizeof(int));
printf("a[2] = %d\n", a[2]);
return (0);
}

