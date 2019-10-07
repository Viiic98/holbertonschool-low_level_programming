#ifndef HOLBERTON_H
#define HOLBERTON_H

/* PUTCHAR */
int _putchar(char c);

/* FILLING AN ARRAY */
char *_memset(char*, char, unsigned int);

/*  */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Printing after one specific character */
char *_strchr(char *s, char c);

/*  */
unsigned int _strspn(char *s, char *accept);

/* sets the value of a char */
void set_string(char **s, char *to);

/* Function that print the characters after any ocurrence */
char *_strpbrk(char *s, char *accept);

/* Function that search for any word ocurrence */
char *_strstr(char *haystack, char *needle);
#endif /* HOLBERTON.H */
