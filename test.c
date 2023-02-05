#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	char arr [] = "123456";
//	printf("%d",strlen(arr));
//
//	return 0;
//}


//void my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	printf("%d",count);
//}
int my_strlen(const char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	int a = 0;
	char arr[] = "1233334";
	a=my_strlen(arr);
	printf("%d", a);
	return 0;
}