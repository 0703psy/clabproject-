#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[5];
	int sum = 0;
	int max, min;
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	min = arr[0];
	for (int i = 0; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("max값은 %d\n",max);
	printf("min값은 %d\n", min);
	printf("총합은 %d\n", sum);
	

}

	


	






