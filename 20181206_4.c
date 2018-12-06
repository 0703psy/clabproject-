#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[50];
	scanf("%s", str);
	int idx = 0;
	while (str[idx] != '\0')
	{
		++idx;
	}
	printf("%d", idx);
}