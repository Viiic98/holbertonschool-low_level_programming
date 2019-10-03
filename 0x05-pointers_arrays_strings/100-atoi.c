#include "holberton.h"
/**
 *
 *
 *
 *
 */
int _atoi(char *s)
{
	char a;
	int i;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			a = a + *s;
		}
		else if ((*s == '+' && s[0] == '+') || (*s == '-' && s[0] == '-'))
		{
			s[0] = '+';
		}
		else if ((*s == '-' && s[0] == '+') || (*s == '+' && s[0] '-'))
		{
			s[0] = '-';
		}
	}
	
}
