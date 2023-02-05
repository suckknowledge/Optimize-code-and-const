#include<stdio.h>
int my_strlen(const char * arr)
{
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	char arr[] = "1233334";
	a = my_strlen(&arr);
	printf("%d", a);
	return 0;
}