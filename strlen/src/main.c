/*
 * main.c
 *
 *      Author: jevoncode
 */
#include <stdio.h>
int main() {
	char *p;
	char name[] = "jevoncode";
	p = name;
	printf("'text' lenght is %d\n", jcstrlen("text"));
	printf("lenght of name array is %d\n", jcstrlen(name));
	printf("lenght of name array which p points to is %d\n", jcstrlen(p));
	return 0;
}

int jcstrlen(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}
