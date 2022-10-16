#include <stdio.h>
/**
*main - print lowercase alphabets
*Return: zero value returned
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
