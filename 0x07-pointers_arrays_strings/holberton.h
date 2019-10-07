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
#endif /* HOLBERTON.H */
