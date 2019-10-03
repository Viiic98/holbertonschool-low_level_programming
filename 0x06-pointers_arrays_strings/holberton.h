#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Putchar function */
int _putchar(char);

/* Concatenate two strings */
char *_strcat(char*, char*);

/* Concatenating two words with specific number of characters */
char *_strncat(char*, char*, int n);

/* Function that copies a string */
char *_strncpy(char*, char*, int);

/* Comparing two strings */
int _strcmp(char*, char*);

/* Reverse a integer array */
void reverse_array(int*, int);

/* From lowercase to uppercase */
char *string_toupper(char *);

/* Capitalizing all words */
char *cap_string(char *);

/* Encoding a string */
char *leet(char *);

/* Encoding another string */
char *rot13(char *);
#endif /* HOLBERTON_H */
