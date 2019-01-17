#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int idx = 0;
	char arr[50];
	scanf("%s", arr);

	while (arr[idx] != NULL) {
		idx++;
	}
	//idx 글자의 수
	int len = idx;
	idx--;
	int idx2 = 0;
	for (int n = 0; n < len / 2; n++,idx--,idx2++) {
		char temp = arr[idx];
		arr[idx] = arr[idx2];
		arr[idx2] = temp;
	}

	printf("%s", arr);


	return 0;
}