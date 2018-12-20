//#include <stdio.h>
//
//int main()
//{
//
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//
//	포인터를 배열처럼 쓰는 방법
//	for (int idx = 0; idx < 5; idx++) {
//		ptr[idx] += 2;
//	}
//	
//	포인터 연산 ex ptr+2
//	for (int i = 0; i < 5; i++) {
//		*(ptr + i) += 2;
//	}
//
//	배열을 출력해주는 친구구 
//	for (int i = 0; i < 5; i++) {
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//
//}