#include<stdio.h>

int plus_five(int num);

int main(void)
{
	int i = -1000;
	while (i <= 1000)
	{
		printf("%d\n", plus_five(i));
		i ++;
	}
	return 0;
}
