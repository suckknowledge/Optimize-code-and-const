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
size_t my_strlen(const char * arr[])//因为长度不可能是负数，所以用无符号整形 ，size_t 表示unsigned int
{
	assert(arr);
	int i = 0;
	size_t count = 0;
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
