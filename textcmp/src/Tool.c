/*
 * Tool.c
 *
 *      Author: Administrator
 */
#include <stdio.h>

int getline(char s[], int lim) {
	int c, i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}
#define ALLOCSIZE 10000 //size of available space
static char allocbuf[ALLOCSIZE]; //storage for alloc
static char *allocp = allocbuf; //next free position
int *alloc(int n) { //return pointer to n characters
	if (allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n; //old p
	} else
		return 0;
}
