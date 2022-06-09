#include <stdio.h>

/**
 * Description - print
 */

int main(void)
{
	char f,m,l;
	int age;

	printf("Enter your initals and age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initals are:%c%c%c and my age is:%d.\n", f,m,l,age);
	return(0);
}
