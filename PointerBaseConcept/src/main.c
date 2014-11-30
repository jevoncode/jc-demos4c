/*
 * main.c
 *
 *      Author: jevoncode
 */

#include <stdio.h>

void swap(int *,int *); //ע����,��������ָ������������ֲ�һ��

int main() {
	int x = 1, y = 2, z[10];
	int *ip; /* ip is a pointer to int */
	ip = &x; /* ip now points to x */
	y = *ip; /* y is not 1 */
	*ip = 0; /* x is not 0*/
	ip = &z[0]; /* ip now points to z[0] */
	printf("x=%d\n", x);
	printf("y=%d\n", y);

	swap(&x, &y);
	printf("after swap...\nx=%d\n", x);
	printf("y=%d", y);

	return 0;
}

void swap(int *a, int *b) { //������ָ��,��������,������,Ҫ���֪�����ͺ�ָ�������(declaration)
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
