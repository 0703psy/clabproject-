//#include <stdio.h>
//
//int main()
//{
//
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//
//	�����͸� �迭ó�� ���� ���
//	for (int idx = 0; idx < 5; idx++) {
//		ptr[idx] += 2;
//	}
//	
//	������ ���� ex ptr+2
//	for (int i = 0; i < 5; i++) {
//		*(ptr + i) += 2;
//	}
//
//	�迭�� ������ִ� ģ���� 
//	for (int i = 0; i < 5; i++) {
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//
//}