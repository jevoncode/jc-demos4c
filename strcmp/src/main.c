/*
 * main.c
 *
 *      Author: jevoncode
 */

int main() {
	char a[] = "jevoncode";
	char b[] = "jevoncode";
	char c[] = "adsf";
	printf("%d\n", mystrcmp(&a, &b));
	printf("%d\n", mystrcmp(&a, &c));
	return 0;
}
/**
 *this function compares the character strings s and t, and return negative, zero or positive
 *if s is lexicographically less then, equal to, or greater than t.
 */
int mystrcmp(char *s, char *t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
