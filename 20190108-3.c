#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void printcm(int n) {
	for (int i = 1; i <= n; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			printf("%4d", i);
		}
		else if (i % 3 == 0) {
			printf("%4d", i);
		}
		else if (i % 5 == 0) {
			printf("%4d", i);
		}
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	printcm(n);
	return 0;

}