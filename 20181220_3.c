#include <stdio.h>

int main()
{
	int len[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10];

	int idx1=0, idx2=9;	//idx1 <- �պ��� �ö���� idx, idx2 <- �ں��� �������� idx
	int*ptr = len;
	for (int i = 0; i < 10; i++)	//�ܼ��� 10���� �ݺ��ϴ� �ݺ���
	{
		if (len[i] % 2 == 1)	//Ȧ���϶�, �տ�������
		{
			arr[idx1] = len[i];
			idx1++;
		}
		if (len[i] % 2 == 0)	//¦���϶�, �ڿ�������
		{
			arr[idx2] = len[i];
			idx2--;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}

}