#include <stdio.h>
#include <stdlib.h>

int func1(int num)
{
	unsigned int a, b, c;
	a = num;
	b = 2;
	c = 3;
	b = 8;
	c = 9;
	printf("%d: a = %d\n", __LINE__, a);
	printf("%d: b = %d\n", __LINE__, b);
}

int main(void)
{
	int *ptr = NULL;
	int array[16];
	int i = 0;
	for(i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		array[i] = i;
	}

	
	ptr = (int *)malloc(16);
	printf("%d\n", __LINE__);
	*ptr = 8;
	func1(1);
//	ptr = NULL;
	*ptr = 7;
	i = 0;
	i = 1;

	return 0;
}
