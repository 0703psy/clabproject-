#include <stdio.h>

int main()
{
	int len[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10];

	int idx1=0, idx2=9;	//idx1 <- 앞부터 올라오는 idx, idx2 <- 뒤부터 내려오는 idx
	int*ptr = len;
	for (int i = 0; i < 10; i++)	//단순히 10번을 반복하는 반복문
	{
		if (len[i] % 2 == 1)	//홀수일때, 앞에서부터
		{
			arr[idx1] = len[i];
			idx1++;
		}
		if (len[i] % 2 == 0)	//짝수일때, 뒤에서부터
		{
			arr[idx2] = len[i];
			idx2--;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}

}