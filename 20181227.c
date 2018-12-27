//#include <stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void bubbleSort(int*);		// 배열을 함수의 인자로 넘길때는 무조건 포인터!!!!
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr[10];
//	bubbleSort(arr);  
//}
//
//void bubbleSort(int *ptr) {
//	for (int i = 0; i < 10; i++) {
//		ptr[i] = rand() % 101;
//	}
//
//	for (int n2 = 9; n2 > 0; n2--) {
//		for (int n1 = 0; n1 < n2; n1++) {
//			if (ptr[n1] > ptr[n1 + 1]) {
//				//데이터교환
//				int temp = ptr[n1];
//				ptr[n1] = ptr[n1 + 1];
//				ptr[n1 + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", ptr[i]);
//	}
//}