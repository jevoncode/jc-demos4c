/*
 * main.c
 *
 *      Author: jevoncode
 */

#include <stdio.h>

void swap(int *,int *); //注意了,这里声明指针参数的样子又不一样

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

void swap(int *a, int *b) { //参数是指针,不是整型,别搞混了,要清楚知道整型和指针的声明(declaration)
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
