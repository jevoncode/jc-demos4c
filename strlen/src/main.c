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
	printf("out of bounds:%c\n", *(p + 10));

	printf("'text' lenght is %d\n", strlenUsePointArithmetic("text"));
	printf("lenght of name array is %d\n", strlenUsePointArithmetic(name));
	printf("lenght of name array which p points to is %d\n",
			strlenUsePointArithmetic(p));

	return 0;
}

int jcstrlen(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

int strlenUsePointArithmetic(char *s) {
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
