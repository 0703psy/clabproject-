//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//		int arr[10];
//		int arr2[10];
//		int n1=0, n2=9;
//
//		for (int i = 0; i < 10; i++) {
//			arr[i] = rand() % 11;
//		}
//
//		for (int i = 0; i < 10; i++) {
//			if (arr[i] % 2 == 0) {
//				arr2[n2] = arr[i];
//				n2--;
//			}
//			else{
//				arr2[n1] = arr[i];
//				n1++;
//			}
//		}
//
//		for (int i = 0; i < 10; i++) {
//			printf("%d ", arr2[i]);
//		}
//		return 0;
//}