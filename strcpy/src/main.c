/*
 * main.c
 *
 *      Author: jevoncode
 */
void mystrcpy(char *, char *);

int main() {
	char a[] = "jevoncode";
	char b[] = "abcdefghi";
	char *p = b;
	int i = 0;
	mystrcpy(&b, &a);
	for (; i < 9; i++)
		printf("%c", *p++);
	return 0;
}
/**
 *this function copies the string t to the string s
 */
void mystrcpy(char *s, char *t) {
	//(*s++=*t++)!='\0' ,comparison against '\0' is redundant
	//since the question is merely whether the expression is zero. 因为while语句的表达式就是判断是否为0,为0则跳出循环,所以加个!=0这是没有意义的
	while ((*s++ = *t++))
		;
}

