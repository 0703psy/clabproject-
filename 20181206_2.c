//#define _crt_secure_no_warnings
//#include <stdio.h>
//
//
//int primeyesorno(int n1);
//
//int main(void) {
//	int n1=2;
//	int count = 0;
//	
//	while(count !=10){
//		if (primeyesorno(n1) == 0) {
//			printf("%d ", n1);
//			count++;
//		}
//		n1++;
//	}
//	
//	return 0;
//}
//
//int primeyesorno(int n1) {
//	int state = 0;	//�Ҽ��� 
//	for (int i = 2; i < n1 - 1; i++) {
//		if (n1%i == 0) {
//			state = 1;		//�Ҽ��� �ƴϴ� ��� ����xo
//			break;
//		}
//	}
//	return state;
//}