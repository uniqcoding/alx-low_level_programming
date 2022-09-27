#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
* void prototypes()
* int prototypes()
* char prototypes()
*/

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void reverse_array(int *a, int n);
void print_number(int n);
char *rot13(char *);

#endif /*MAIN_H*/