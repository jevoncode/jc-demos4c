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
	//since the question is merely whether the expression is zero. ��Ϊwhile���ı��ʽ�����ж��Ƿ�Ϊ0,Ϊ0������ѭ��,���ԼӸ�!=0����û�������
	while ((*s++ = *t++))
		;
}

